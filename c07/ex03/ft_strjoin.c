/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:21:28 by algultse          #+#    #+#             */
/*   Updated: 2023/07/18 17:19:46 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_do_malloc(int size, char **strs, char *sep)
{
	int	msize;

	msize = ft_strlen(sep) * (size - 1);
	while (--size >= 0)
		msize += ft_strlen(strs[size]);
	return ((char *)malloc(sizeof(char) * (msize + 1)));
}

int	ft_part_concat(char **target, char *src, int i)
{
	while (*src)
	{
		(*target)[i] = *src;
		i++;
		src++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*res;

	if (size <= 0)
	{
		res = (char *)malloc(sizeof(char));
		*res = 0;
		return (res);
	}
	res = ft_do_malloc(size, strs, sep);
	if (res == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < size)
	{
		i = ft_part_concat(&res, strs[j], i);
		if (j < size - 1)
			i = ft_part_concat(&res, sep, i);
		j++;
	}
	res[i] = '\0';
	return (res);
}

/*
#include <unistd.h>

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

#include <stdio.h>

int main(void)
{
	char *strs[60] = {"abc", "def", "rr", "rrr"};
	char *sep = "*-";
	char * res = ft_strjoin(-50, strs, sep);
	printf("%s", res);
}
*/