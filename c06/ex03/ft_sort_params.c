/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:39:41 by algultse          #+#    #+#             */
/*   Updated: 2023/07/16 15:42:49 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_swap(char **argv1, char **argv2)
{
	char	*tmp;

	tmp = *argv1;
	*argv1 = *argv2;
	*argv2 = tmp;
}

int	main(int argc, char **argv)
{
	int		i;
	int		done;

	done = 0;
	while (!done)
	{
		i = 0;
		done = 1;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				done = 0;
			}
		}
	}
	i = 1;
	while (i < argc)
	{
		write (1, argv[i], ft_strlen(argv[i]));
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
