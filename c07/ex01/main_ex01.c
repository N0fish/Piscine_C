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
	return(size * res);
}

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

int	main(int argc, char **argv)
{
	int	*range;
	int	i;
	int	a;
	int	b;
	
	if (argc == 3)
	{
		range = ft_range(ft_atoi(argv[1]), ft_atoi(argv[2]));
		i = 0;
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[2]);
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
