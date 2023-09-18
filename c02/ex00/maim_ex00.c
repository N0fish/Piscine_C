#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

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
	
	ft_strcpy(b, a);
	ft_putstr(b);	
	return (0);
}
