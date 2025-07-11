/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:21:57 by averin            #+#    #+#             */
/*   Updated: 2023/07/09 13:42:02 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_line(int *line, int size);
int	check_rev_line(int *line, int size);
int	check_column(int **board, int x, int size);
int	check_rev_column(int **line, int x, int size);
int	**place_value(int x, int y, int size, int **board);

int	can_be_placed_row(int n, int *line, int size)
{
	int	i;

	i = 1;
	while (i < size - 2)
	{
		if (line[i] == n)
			return (0);
		i++;
	}
	return (1);
}

int	can_be_placed_column(int n, int **line, int x, int size)
{
	int	i;

	i = 1;
	while (i < size - 2)
	{
		if (line[i][x] == n)
			return (0);
		i++;
	}
	return (1);
}

int	**check_placing(int x, int y, int size, int **board)
{
	int	**solution;

	solution = NULL;
	if (x == size - 2 && y == size - 2)
	{
		if (check_line(board[y], size) && check_column(board, x, size)
			&& check_rev_line(board[y], size)
			&& check_rev_column(board, x, size))
			return (board);
	}
	else if (x == size - 2)
	{
		if (check_line(board[y], size)
			&& check_rev_line(board[y], size))
			solution = place_value(1, y + 1, size, board);
	}
	else if (y == size - 2)
	{
		if (check_column(board, x, size)
			&& check_rev_column(board, x, size))
			solution = place_value(x + 1, y, size, board);
	}
	else
		solution = place_value(x + 1, y, size, board);
	return (solution);
}
