#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char a[12] = {"satuul"};
	char b[] = {"salut"};
	char a1[12] = {"satuul"};
	char b2[] = {"salut"};
	char *c = ft_strncat(a, b, 12);
	printf("dest/a: %s\n", a);
	char *d = strncat(a1, b2, 12);

	printf("%s:%s\n", c, d);
	printf("%s\n", strcmp(c, d) == 0 ? "Success" : "Fail");
	return (0);
}
