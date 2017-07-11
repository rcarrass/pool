/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 22:24:53 by recarras          #+#    #+#             */
/*   Updated: 2017/07/11 23:10:34 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int		i;
	int		*tabint;
	int		range;

	range = max - min;
	i = 0;
	if (!(tabint = (int*)malloc(sizeof(int) * (range + 1))))
		return (0);
	while (i <= range)
	{
		tabint[i] = min;
		min++;
		i++;
	}
	return (tabint);
}	
