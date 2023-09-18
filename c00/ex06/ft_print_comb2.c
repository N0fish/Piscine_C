/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 00:06:45 by algultse          #+#    #+#             */
/*   Updated: 2023/07/01 14:21:52 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_fun_com(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	zero;
	int	deux;

	zero = 0;
	while (zero <= 99)
	{
		deux = zero + 1;
		while (deux <= 99)
		{
			if (zero != deux)
			{
				ft_print_fun_com(zero, deux);
			}
			if (zero != 99)
			{
				if (zero != 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			deux++;
		}
		zero++;
	}	
}
