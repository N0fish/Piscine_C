#include <unistd.h>

int ft_is_prime(int nb);

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
	int mul;
	int res;
	int step;

	step = 0;
	res = 0;
	mul = 1;
	while (*str)
	{
		if(!ft_is_valid_char(*str, step))
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

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int mod;

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

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	if (*argv[1] != '\0')
	{
		ft_putnbr(ft_is_prime(ft_atoi(argv[1])));
	}
	return (0);
}

// int ft_is_prime(int nb)
// {
// 	int	i;

// 	if (nb < 2)
// 		return (0);
// 	i = 2;
// 	while ((i * i) <= nb)
// 	{
// 		if ((nb % i) == 0)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }
