#include <unistd.h>

char	*ft_strcapitalize(char *str);

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
	char c[] = {"Salut, Comment Tu vas ? 42mots quarante-deux; cinquante+et+un"};

	ft_putstr(ft_strcapitalize(c));
	return (0);
}
