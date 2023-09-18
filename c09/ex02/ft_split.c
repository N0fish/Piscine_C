/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:36:55 by algultse          #+#    #+#             */
/*   Updated: 2023/07/20 19:18:52 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strs_comp(char *str, char *charset)
{
	int	i;
	int	comp;

	i = 0;
	comp = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], charset))
			i++;
		if (str[i])
			comp++;
		while (str[i] && !check_sep(str[i], charset))
			i++;
	}
	return (comp);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_sep(str[i], charset))
		i++;
	return (i);
}

char	*ft_mot(char *str, char *charset)
{
	int		i;
	int		l_mot;
	char	*mot;

	i = 0;
	l_mot = ft_strlen_sep(str, charset);
	mot = malloc(sizeof(char) * (l_mot + 1));
	while (i < l_mot)
	{
		mot[i] = str[i];
		i++;
	}
	mot[i] = '\0';
	return (mot);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strs;

	i = 0;
	strs = malloc(sizeof(char *) * (ft_strs_comp(str, charset) + 1));
	while (*str)
	{
		while (*str && check_sep(*str, charset))
			str++;
		if (*str)
		{
			strs[i] = ft_mot(str, charset);
			i++;
		}
		while (*str && !check_sep(*str, charset))
			str++;
	}
	strs[i] = '\0';
	return (strs);
}
