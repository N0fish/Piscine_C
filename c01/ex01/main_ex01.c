#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

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
	int *a_1;
	int **a_2;
	int ***a_3;
	int ****a_4;
	int *****a_5;
	int ******a_6;
	int *******a_7;
	int ********a_8;
	// int *********a_9;

	a = 2;
	a_1 = &a;
	a_2 = &a_1;
	a_3 = &a_2;
	a_4 = &a_3;
	a_5 = &a_4;
	a_6 = &a_5;
	a_7 = &a_6;
	a_8 = &a_7;
	// a_9 = &a_8;
    // ft_ultimate_ft(a_9);
    ft_ultimate_ft(&a_8);
    ft_putnbr(a);
    return (0);
}
