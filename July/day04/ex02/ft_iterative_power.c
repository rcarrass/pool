/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:04:48 by recarras          #+#    #+#             */
/*   Updated: 2017/07/08 15:05:48 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		result;
	int		i;

	i = 0;
	result = nb;
	if (power == 0)
		result = 1;
	else if (power < 0)
		return (0);
	while (i < (power - 1))
	{
		result = result * nb;
		i++;
	}
	return (result);
}
