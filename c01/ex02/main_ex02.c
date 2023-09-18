#include <unistd.h>

void	ft_swap(int *a, int *b);

void 	ft_putchar(char c)
{
	write (1 , &c, 1);
}

void	ft_putnbr(int nb)
{
    int a;
    int	size;

    size = 1;
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    a = nb;
	a /= 10;
    while (a > 0)
    {
        size *= 10;
		a /= 10;
    }
    while (size)
    {
        ft_putchar((nb / size) + '0');
        nb %= size;
        size /= 10;
    }
}

int	main(void)
{
	int	c;
	int	d;
	int	*a;
	int *b;

	c = 2;
	d = 1;
	a = &c;
	b = &d;
	ft_swap(a, b);
	ft_putnbr(a);
	ft_putnbr(b);
	return (0);
}
