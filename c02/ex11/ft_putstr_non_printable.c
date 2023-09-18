/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 23:15:11 by algultse          #+#    #+#             */
/*   Updated: 2023/07/05 15:24:01 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_str_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

void	ft_print_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[(unsigned char)c / 16]);
	ft_putchar(hex[(unsigned char)c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (ft_str_is_printable(c))
		{
			ft_putchar(c);
		}
		else
		{
			ft_print_hex(c);
		}
		i++;
	}
}
