/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:05:07 by recarras          #+#    #+#             */
/*   Updated: 2017/07/09 11:10:57 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		nb = 1;
	else if (power < 0)
		return (0);
	else if (power != 1)
		nb *= ft_recursive_power(nb, (power - 1));
	return (nb);
}
