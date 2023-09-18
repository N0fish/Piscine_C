/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:24:05 by algultse          #+#    #+#             */
/*   Updated: 2023/07/17 16:54:41 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		n;
	int		i;

	i = 0;
	n = ft_strlen(src);
	str = (char *)malloc(sizeof(*str) * (n + 1));
	if (str == NULL)
		return (NULL);
	while (*src)
	{
		str[i] = *src;
		src++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
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
*/