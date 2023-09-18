#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char c[] = {"Coucou\ntu vas bien ?"};
	
	ft_putstr_non_printable(c);
	return (0);
}
