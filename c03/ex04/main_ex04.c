// #include <stdio.h>
// #include <string.h>

// char	*ft_strstr(char *str, char *to_find);

// int	main(void)
// {
// 	char a[] = {"satuul saaalut satul salut"};
// 	char b[] = {"salut"};
// 	char *c = ft_strstr(a, b);
// 	char *d = strstr(a, b);

// 	printf("%s:%s\n", c, d);
// 	printf("%s\n", strcmp(c, d) == 0 ? "Success" : "Fail");
// 	return (0);
// }

#include<stdio.h>

int main (int ac, char **av)
{
	if (ac == 3)
		printf("%s \n", ft_strstr(av[1], av[2]));
	else
		printf("%s", "Number of arguments incorrect!!!");
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int ac, char **av)
{
	(void) ac;

	printf("> strstr(%s,%s) = %s\n", av[1], av[2], strstr(av[1], av[2]));
	printf("> ft_strstr(%s,%s) = %s\n", av[1], av[2], ft_strstr(av[1], av[2]));

	return (0);
}