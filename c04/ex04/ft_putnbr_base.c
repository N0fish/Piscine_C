/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 22:35:33 by algultse          #+#    #+#             */
/*   Updated: 2023/07/10 13:02:36 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_tab(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[i] || ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (!(base[i] >= '0' && base[i] <= '9')
			&& !(base[i] >= 'A' && base[i] <= 'Z')
			&& !(base[i] >= 'a' && base[i] <= 'z'))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		div;
	char	c;
	int		neg;

	if (!ft_check_tab(base))
		return ;
	base_len = ft_strlen(base);
	div = nbr / base_len;
	neg = 1;
	if (nbr < 0)
		neg = -1;
	c = base[(neg * nbr) % base_len];
	if (div == 0)
	{
		if (neg == -1)
			write(1, "-", 1);
		write(1, &c, 1);
		return ;
	}
	ft_putnbr_base(div, base);
	write (1, &c, 1);
}

/*
int	ft_set_mul(int mul, char c)
{
	if (c == '-')
		return (-mul);
	return (mul);
}

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\t');
}

int	ft_is_valid_char(char c, int step)
{
	return ((c == '-' && step <= 1) || (c >= '0' && c <= '9')
		|| (ft_is_space(c) && step == 0) || c == '+');
}

int	ft_atoi(char *str)
{
	int	mul;
	int	res;
	int	step;

	step = 0;
	res = 0;
	mul = 1;
	while (*str)
	{
		if (!ft_is_valid_char(*str, step))
			return (mul * res);
		if (*str == '-')
		{
			mul = ft_set_mul(mul, *str);
			step = 1;
		}
		else if (*str >= '0' && *str <= '9')
		{
			res *= 10;
			res += (*str - 48);
			step = 2;
		}
		str++;
	}
	return (mul * res);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (*argv[1] != '\0')
		{
			ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
		}
	}
	write (1, "\n", 1);
	return (0);
}
*/