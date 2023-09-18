#include <unistd.h>

int	ft_str_is_uppercase(char *str);

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
		return;
	}
	mod = nb % 10;
	ft_putnbr(nb / 10);
	ft_putchar(mod + '0');
}

int	main(void)
{
	char *c;

	c = "SALUT";
	ft_putnbr(ft_str_is_uppercase(c));
	return (0);
}
