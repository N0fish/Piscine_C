#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str;
		char *res;

		str = argv[1];
		res = ft_strdup(str);
		write (1, res, ft_strlen(res));
	}
	write (1, "\n", 1);
	return (0);
}

// #include <unistd.h>

// int	main(void)
// {
// 	char *str = {"salut"};
// 	char *a;
// 	a = ft_strdup(str);
// 	write (1, a, ft_strlen(a));
// }
