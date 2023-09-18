#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

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

/*
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
	return (0);
}
*/

// if (base[i] == '-' || base[i] == '+')
// 	return (0);