#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int 	i;
	unsigned int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return(&str[i]);
		i++;
	}
	return (0);
}	

		// 	printf("%c , %c, %s\n", str[i + j], to_find[j], "вторая строка");
		// printf("%c, %s\n", str[i + j], "первая строка");
