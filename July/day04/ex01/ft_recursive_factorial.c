/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:13:08 by recarras          #+#    #+#             */
/*   Updated: 2017/07/09 11:13:12 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		nb = 1;
	else if (nb > 0 && nb < 13)
	{
		if (nb != 1)
			nb *= ft_recursive_factorial(nb - 1);
	}
	else
		nb = 0;
	return (nb);
}
