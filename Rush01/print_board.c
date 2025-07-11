/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:04:58 by averin            #+#    #+#             */
/*   Updated: 2023/07/09 14:07:24 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	print_board(int **board, int size)
{
	int	x;
	int	y;

	y = 1;
	while (y < size - 1)
	{
		x = 1;
		while (x < size - 1)
		{
			print_number(board[y][x]);
			if (x != size - 2)
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}
