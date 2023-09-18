#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char *p_str;

	p_str = "Hello World!";
	ft_putstr(p_str);
	return (0);
}
