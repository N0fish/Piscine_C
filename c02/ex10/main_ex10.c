#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
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
	char a[] = {"hellodddddd"};
	char b[8];
	unsigned int	c;

	c = 8;
	ft_strlcpy(b, a, c);
	ft_putstr(b);
	ft_putchar('\n');
	ft_putnbr(c);
	return (0);
}
