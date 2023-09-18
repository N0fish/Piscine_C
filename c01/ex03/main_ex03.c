#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

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
		ft_putchar('0' + nb);
		return;
	}
	mod = nb % 10;
	ft_putnbr(nb / 10);
	ft_putchar('0' + mod);
}

int main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 6;
	b = 3;
	ft_div_mod(a, b, &c, &d);
	ft_putnbr(c);
	ft_putnbr(d);
	return (0);
}
