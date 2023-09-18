/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:48:15 by algultse          #+#    #+#             */
/*   Updated: 2023/07/02 23:07:28 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_rev_int_tab(int *tab, int size)
// {
// 	int a;
// 	int i;
// 	int tmp[size];

// 	i = 0;
// 	a = size - 1;
// 	while (i <= a)
// 	{
// 		tmp[i] = tab[a - i];
// 		i++;
// 	}
// 	i = 0;
// 	a = size - 1;
// 	while (i <= a)
// 	{
// 		tab[i] = tmp[i];
// 		i++;
// 	}
// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
