#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char a[12] = {"satuul"};
	char b[] = {"salut"};
	char a1[12] = {"satuul"};
	char b2[] = {"salut"};
	char *c = ft_strcat(a, b);
	printf("dest/a: %s\n", a);
	char *d = strcat(a1, b2);

	printf("res: %s:%s\n", c, d);
	printf("%s\n", strcmp(c, d) == 0 ? "Success" : "Fail");
	return (0);
}


// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		ft_putchar(str[i]);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char a[20] = {"hello "};
// 	char b[20] = {"world"};

// 	ft_strcat(a, b);
// 	ft_putstr(a);
// 	return (0);
// }

// #include <string.h>
// #include <stdio.h>

// char	*ft_strcat(char *dest, char *src);

// int	main(void)
// {
// 	char s1a[10] = "Test1";
// 	char s2a[] = "OK";
// 	char s1b[10] = "Test1";
// 	char s2b[] = "OK";
// 	char s3a[10] = "Same";
// 	char s4a[] = "Size";
// 	char s3b[10] = "Same";
// 	char s4b[] = "Size";
// 	char s5a[20] = "Shorter";
// 	char s6a[] = "ThanMyself";
// 	char s5b[20] = "Shorter";
// 	char s6b[] = "ThanMyself";

// 	printf("%s:%s\n", ft_strcat(s1a, s2a), strcat(s1b, s2b));
// 	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
// 	printf("%s:%s\n", ft_strcat(s3a, s4a), strcat(s3b, s4b));
// 	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
// 	printf("%s:%s\n", ft_strcat(s5a, s6a), strcat(s5b, s6b));
// 	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
// }