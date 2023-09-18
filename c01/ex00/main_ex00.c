#include <unistd.h>

void	ft_ft(int *nbr);

void	ft_putchar(char c)
{
    write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int mod;

	if (nb == -2 << 30)
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

int	main()
{
    int a;

	a = 2;
    ft_ft(&a);
    ft_putnbr(a);
    return (0);
}
