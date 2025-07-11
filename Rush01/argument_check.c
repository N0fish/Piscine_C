/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:56:51 by averin            #+#    #+#             */
/*   Updated: 2023/07/09 14:06:03 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_numbers(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		if ((*str < '0' || *str > '9') && *str != ' ')
			return (-1);
		else if (*str == ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
			return (-1);
		else if (*str >= '0' && *str <= '9')
			n++;
		str++;
	}
	return (n);
}

int	*get_arguments(char *str, int size)
{
	int	i;
	int	*n;

	n = malloc(size * sizeof(int));
	i = 0;
	while (i < (size - 2) * 4)
	{
		if (*str >= '1' && *str <= size + '0')
		{
			n[i] = *str - '0';
			str += 2;
		}
		else
		{
			free(n);
			return (NULL);
		}
		i++;
	}
	return (n);
}

int	get_board_size(char *str)
{
	int	size;

	size = count_numbers(str);
	if (size % 4 != 0)
		return (-1);
	return (size / 4);
}

//int main(int argc, char *argv[])
//{
//	int size = count_numbers(argv[1]);
//	printf("numbers: %d\n", size);
//	int *n = get_arguments(argv[1], atoi(argv[2]));
//	if (!n)
//	{
//		printf("Erreur\n");
//		return 0;
//	}
//	for (int i = 0; i < atoi(argv[2]); i++)
//		printf("%d: %d\n", i, n[i]);
//	return 0;
//}
