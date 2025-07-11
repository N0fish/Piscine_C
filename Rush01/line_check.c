/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:58:17 by averin            #+#    #+#             */
/*   Updated: 2023/07/09 11:01:01 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_line(int *line, int size)
{
	int	i;
	int	max;
	int	bat;

	i = 1;
	max = line[1];
	bat = 1;
	while (i < size - 2)
	{
		if (line[i + 1] > max)
		{
			bat++;
			max = line[i + 1];
		}
		i++;
	}
	if (bat == line[0])
		return (1);
	return (0);
}

int	check_rev_line(int *line, int size)
{
	int	i;
	int	max;
	int	bat;

	i = size - 2;
	max = line[i];
	bat = 1;
	while (i > 1)
	{
		if (line[i - 1] > max)
		{
			bat++;
			max = line[i - 1];
		}
		i--;
	}
	if (bat == line[size - 1])
		return (1);
	return (0);
}

int	check_column(int **board, int x, int size)
{
	int	i;
	int	max;
	int	bat;

	i = 1;
	max = board[1][x];
	bat = 1;
	while (i < size - 2)
	{
		if (board[i + 1][x] > max)
		{
			bat++;
			max = board[i + 1][x];
		}
		i++;
	}
	if (bat == board[0][x])
		return (1);
	return (0);
}

int	check_rev_column(int **line, int x, int size)
{
	int	i;
	int	max;
	int	bat;

	i = size - 2;
	max = line[i][x];
	bat = 1;
	while (i > 1)
	{
		if (line[i - 1][x] > max)
		{
			bat++;
			max = line[i - 1][x];
		}
		i--;
	}
	if (bat == line[size - 1][x])
		return (1);
	return (0);
}
