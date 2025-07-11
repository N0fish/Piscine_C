/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:43:37 by averin            #+#    #+#             */
/*   Updated: 2023/07/09 13:53:46 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	print_board(int **board, int size);
int		get_board_size(char *str);
int		**setup_board(char *values, int size);
int		can_be_placed_row(int n, int *line, int size);
int		can_be_placed_column(int n, int **line, int x, int size);
int		**check_placing(int x, int y, int size, int **board);
void	free_board(int **board, int size);

int	print_error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int	**place_value(int x, int y, int size, int **board)
{
	int	i;
	int	**solution;

	solution = NULL;
	i = 1;
	while (i <= size - 2)
	{
		if (can_be_placed_row(i, board[y], size)
			&& can_be_placed_column(i, board, x, size))
		{
			board[y][x] = i;
			solution = check_placing(x, y, size, board);
			if (solution != NULL)
				return (solution);
			board[y][x] = 0;
		}
		i++;
	}
	return (NULL);
}

int	main(int argc, char *argv[])
{
	int	**board;
	int	size;

	if (argc != 2 && print_error())
		return (0);
	size = get_board_size(argv[1]);
	if ((size == -1 || (size < 1 || size > 9)) && print_error())
		return (0);
	size += 2;
	board = setup_board(argv[1], size);
	if (!board && print_error())
		return (0);
	board = place_value(1, 1, size, board);
	if (!board && print_error())
		return (0);
	print_board(board, size);
	free_board(board, size);
}
