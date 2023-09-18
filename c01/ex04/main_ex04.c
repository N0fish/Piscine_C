#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

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

int	main(void)
{
	int a = 6;
	int b = 3;
	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	ft_putnbr(b);
	return (0);
}
