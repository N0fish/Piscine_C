/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 00:06:37 by algultse          #+#    #+#             */
/*   Updated: 2023/06/30 00:06:39 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_write_block(char zero, char un, char deux, char espace)
{
	if (espace == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(zero);
	ft_putchar(un);
	ft_putchar(deux);
}

void	ft_print_comb(void)
{
	char	un;
	char	deux;
	char	trois;
	char	espace;

	un = '0';
	espace = '0';
	while (un <= '9')
	{
		deux = un + 1;
		while (deux <= '9')
		{
			trois = deux + 1;
			while (trois <= '9')
			{
				ft_print_write_block(un, deux, trois, espace);
				espace = 1;
				trois++;
			}
			deux++;
		}
		un++;
	}
}
