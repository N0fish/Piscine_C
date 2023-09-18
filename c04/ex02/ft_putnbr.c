/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:55:06 by algultse          #+#    #+#             */
/*   Updated: 2023/07/10 13:02:02 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	mod;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	mod = nb % 10;
	ft_putnbr(nb / 10);
	ft_putchar(mod + '0');
}

/*
int	main(void)
{
	ft_putnbr(42);
	write (1, "\n", 1);
	ft_putnbr(-42);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	ft_putnbr(2147483647);
	write (1, "\n", 1);
}
*/