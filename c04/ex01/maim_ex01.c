#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char s1[] = "Suc";
	char s2[] = "cess\n";
	
	ft_putstr(s1);
	ft_putstr(s2);
}
