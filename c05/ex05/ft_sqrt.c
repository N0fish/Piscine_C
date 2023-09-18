/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algultse <algultse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:31:56 by algultse          #+#    #+#             */
/*   Updated: 2023/07/13 21:42:12 by algultse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	sqr;

	if (nb < 1)
		return (0);
	sqr = nb / 2;
	while ((sqr * sqr) >= nb || sqr > 46340)
		sqr /= 2;
	while ((sqr * sqr) < nb && sqr < 46340)
		sqr += 1;
	if ((sqr * sqr) == nb)
		return (sqr);
	return (0);
}
