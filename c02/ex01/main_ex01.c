#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main	(void)
{
	char	a[] = {"Hello World!"};
	char	b[13];
	int	c;
	
	c = 9;
	ft_strncpy(b, a, c);
	ft_putstr(b);	
	return (0);
}
