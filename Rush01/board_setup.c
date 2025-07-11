/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_setup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:56:32 by averin            #+#    #+#             */
/*   Updated: 2023/07/09 13:54:54 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*get_arguments(char *str, int size);

int	**create_board(int size)
{
	int	**board;
	int	i;

	board = malloc(size * sizeof(int *));
	i = 0;
	while (i < size)
	{
		board[i] = malloc(size * sizeof(int));
		i++;
	}
	return (board);
}

void	clear_board(int ***board, int size)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < size)
	{
		while (x < size)
		{
			(*board)[y][x] = 0;
			x++;
		}
		y++;
	}
}

int	**setup_board(char *values, int size)
{
	int	**board;
	int	*numbers;
	int	i;
	int	j;

	board = create_board(size);
	numbers = get_arguments(values, size);
	j = 0;
	if (numbers == 0)
		return (0);
	clear_board(&board, size);
	i = 1;
	while (i < size - 1)
		board[0][i++] = numbers[j++];
	i = 1;
	while (i < size - 1)
		board[size - 1][i++] = numbers[j++];
	i = 1;
	while (i < size - 1)
		board[i++][0] = numbers[j++];
	i = 1;
	while (i < size - 1)
		board[i++][size - 1] = numbers[j++];
	free(numbers);
	return (board);
}

void	free_board(int **board, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(board[i++]);
	free(board);
}
