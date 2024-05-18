/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:37:48 by habouda           #+#    #+#             */
/*   Updated: 2024/05/14 13:45:11 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb >= 46340 * 46340)
		return (0);
	while (res < nb)
	{
		res = i * i;
		if (res == nb)
			return (i);
		i++;
	}
	return (0);
}
