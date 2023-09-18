#include <unistd.h>

int	ft_strlen(char *str);

void 	ft_putchar(char c)
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
		ft_putchar('0' + nb);
		return;
	}
	mod = nb % 10;
	ft_putnbr(nb / 10);
	ft_putchar('0' + mod);
}

int	main(void)
{
	char *str;
	int res;

	str = "Hello World!";
	res = ft_strlen(str);
	ft_strlen(str);
	ft_putnbr(res);
	ft_putchar('\n');
	return(0);
}
