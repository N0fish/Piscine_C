/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:02:51 by algultse          #+#    #+#             */
/*   Updated: 2023/07/10 18:17:06 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_delim(int n)
{
	if (n < 48 || (n > 57 && n < 65) || (n > 90 && n < 97) || n > 122)
		return (1);
	return (0);
}

int	ft_maj(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_min(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_maj(str[i]))
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_delim(str[i -1]))
		{
			if (ft_min(str[i]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// #include <unistd.h>

// int	ft_delim(int n)
// {
// 	if (n < 48 || (n > 57 && n < 65) || (n > 90 && n < 97) || n > 122)
//     return (1);
//   return (0);
// }

// int	ft_maj(char c)
// {
// 	return (c >= 'A' && c <= 'Z');
// }

// int	ft_min(char c)
// {
// 	return (c >= 'a' && c <= 'z');
// }

// char	*ft_strcapitalize(char *str)
// {
// 	int	i;
// 	int	up;

// 	i = 0;
// 	up = 1;
// 	while (str[i] != '\0')
// 	{
// 		if (ft_min(str[i]) && up)
// 		{
// 			str[i] -= 32;
// 			up = 0;
// 		}
// 		else
// 		{
// 			if (ft_maj(str[i]))
// 			{
// 				str[i] += 32;
// 			}
// 			up = ft_delim(str[i]);
// 		}
// 		i++;
// 	}
// 	return (str);
// }
