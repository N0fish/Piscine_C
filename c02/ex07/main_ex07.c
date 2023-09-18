#include <unistd.h>

char	*ft_strupcase(char *str);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	c[] = {"salut"};

	ft_putstr(ft_strupcase(c));
	return (0);
}
