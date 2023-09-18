#include <unistd.h>

int	ft_iterative_power(int nb, int power);

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
	if (argc != 3)
		return (0);
	if (*argv[1] != '\0' && *argv[2] != '\0')
	{
		ft_putnbr(ft_iterative_power(ft_atoi(argv[1]), ft_atoi(argv[2])));
	}
	write (1, "\n", 1);
	return (0);
}
