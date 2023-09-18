#include <unistd.h>

char *ft_strjoin(int size, char **strs, char *sep);
int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int		i;
	char	*res;
	char	**strs;
	char	*sep;
	
	i = 1;
	if (argc > 1)
	{
		sep = argv[argc - 1];
		strs = malloc(sizeof(char*) * argc - 2);
		if (strs == NULL)
			return (0);
		while (i < (argc -1))
		{
			strs[i - 1] = argv[i];
			i++;
		}
		res = ft_strjoin(argc - 2, strs, sep);
		write (1, "res: ", 6);
		write (1, res, ft_strlen(res));
	}
	write (1, "\n", 1);
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *strs[60] = {"abc", "def", "rr", "rrr"};
// 	char *sep = "*-";
// 	char * res = ft_strjoin(-50, strs, sep);
// 	printf("%s", res);
// }