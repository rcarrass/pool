/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:10:48 by recarras          #+#    #+#             */
/*   Updated: 2017/07/11 23:15:54 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	if (min >= max)
	{
		range = (void *)0;
		return (0);
	}
	else if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	else
	{
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	*range = tab;
	return (i);
}
