/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:06:17 by algultse          #+#    #+#             */
/*   Updated: 2023/07/20 14:25:04 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_stdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	if (src == NULL)
		return (NULL);
	len = 0;
	while (src[len])
		len++;
	str = (char *)malloc(sizeof(*src) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*res;

	res = malloc(sizeof(*res) * (ac + 1));
	if (res == NULL)
		return (NULL);
	i = -1;
	while (i++, i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_stdup(av[i]);
		if (res[i].copy == NULL)
		{
			free(res);
			return (NULL);
		}
	}
	res[i].str = 0;
	return (res);
}

// #include "ft_stock_str.h"

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// char	*ft_stdup(char *src)
// {
// 	int		i;
// 	int		len;
// 	char	*str;

// 	len = 0;
// 	while (src[len])
// 		len++;
// 	str = (char *)malloc(sizeof(*src) * (len + 1));
// 	if (str == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		str[i] = src[i];
// 		i++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	int					i;
// 	struct s_stock_str	*res;

// 	res = malloc(sizeof(*res) * (ac + 1));
// 	if (res == NULL)
// 		return (NULL);
// 	i = -1;
// 	while (i++, i < ac)
// 	{
// 		res[i].size = ft_strlen(av[i]);
// 		res[i].str = av[i];
// 		res[i].copy = ft_stdup(av[i]);
// 	}
// 	res[i].str = 0;
// 	return (res);
// }
