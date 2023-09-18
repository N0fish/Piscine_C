/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 22:35:26 by algultse          #+#    #+#             */
/*   Updated: 2023/07/02 16:38:31 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int mod;

	// if (nb == -2147483648)
	if (nb == -2 << 30)
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
		ft_putchar('0' + nb);
		return;
	}
	mod = nb % 10;
	ft_putnbr(nb / 10);
	ft_putchar('0' + mod);
}
// void	ft_putnbr(int nb)
// {
// 	int	a;
// 	int	size;

// 	size = 1;
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nb = -nb;
// 	}
// 	a = nb;
// 	a /= 10;
// 	while (a > 0)
// 	{
// 		size *= 10;
// 		a /= 10;
// 	}
// 	while (size)
// 	{
// 		ft_putchar((nb / size) + '0');
// 		nb %= size;
// 		size /= 10;
// 	}
// }

void	ft_putnbr(int nb)
{
	int a;
	int size;

	size = 1;
	if (nb == -2147483648)
	{
		write(1,"-2147483648", 11);
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	a /= 10;
	while (a > 0)
	{
		size *= 10;
		a /= 10;
	}
	while (size)
	{
		ft_putchar((nb / size) + '0');
		nb %= size;
		size /= 10;
	}
}
