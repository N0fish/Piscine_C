// #include <unistd.h>

// int	ft_strncmp(char *s1, char *s2, unsigned int n);

// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	int mod;

// 	if (nb == -2147483648)
// 	{
// 		ft_putchar('-');
// 		ft_putchar('2');
// 		nb = 147483648;
// 	}
// 	if (nb < 0)
// 	{
// 		nb = -nb;
// 		ft_putchar('-');
// 	}
// 	if (nb < 10)
// 	{
// 		ft_putchar(nb + '0');
// 		return;
// 	}
// 	mod = nb % 10;
// 	ft_putnbr(nb / 10);
// 	ft_putchar(mod + '0');
// }

// int	main(void)
// {
// 	char str1[] = {"aaba"};
// 	char str2[] = {"aab"};

// 	if (ft_strncmp(str1, str2, 6) == 0)
// 	{
// 		ft_putnbr(ft_strncmp(str1, str2, 6));
// 	}
// 	else if (ft_strncmp(str1, str2, 6) > 0)
// 	{
// 		ft_putnbr(ft_strncmp(str1, str2, 6));
// 	}
// 	else if (ft_strncmp(str1, str2, 6) < 0)
// 	{
// 		ft_putnbr(ft_strncmp(str1, str2, 6));
// 	}
// 	return (0);
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int ac, char **av)
{
	(void) ac;
	int nb = atoi(av[3]);
	printf("> strncmp(%s,%s, %d) = %d\n", av[1], av[2], nb, strncmp(av[1], av[2], nb));
	printf("> ft_strncmp(%s,%s, %d) = %d\n", av[1], av[2], nb, ft_strncmp(av[1], av[2], nb));

	return (0);
}

