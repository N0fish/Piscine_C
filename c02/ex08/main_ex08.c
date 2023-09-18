#include <unistd.h>

char	*ft_strlowcase(char *str);

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

int	main(void)
{
	char c[] = {"SALUT"};

	ft_putstr(ft_strlowcase(c));
	return (0);
}
