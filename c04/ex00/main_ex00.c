#include <unistd.h>

int	ft_strlen(char *str);

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
		nb = 247483648;
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
	char a[] = {"Hello World"};

	ft_putnbr(ft_strlen(&a));
	return (0);
}

/*
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char s1[] = "MyStr";
	char s2[] = "MyTest\nOfSuccess";
	char s3[] = "0123456789abcdef";
	char s4[] = "My\tStr";
	char s5[] = "";
	printf(ft_strlen(s1) == 5 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s2) == 16 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s3) == 16 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s4) == 6 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s5) == 0 ? "Success\n" : "Fail\n");
}
*/