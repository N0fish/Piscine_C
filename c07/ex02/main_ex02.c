#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	size;

	i = 0;
	res = 0;
	size = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			size *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (size * res);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
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
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

int	main(int argc, char **argv)
{
	int	*range;
	int	res;
	int	i;
	int	a;
	int	b;

	if (argc == 3)
	{
		i = 0;
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[2]);
		res = ft_ultimate_range(&range, a, b);
		write(1, "res: ", 6);
		ft_putnbr(res);
		// write (1, " ", 1);
		write (1, "\nrange[i]: ", 12);
		while (i < b-a)
		{
			if (i > 0)
				write (1, ", ", 2);
			ft_putnbr(range[i]);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
