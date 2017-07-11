/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:18:35 by recarras          #+#    #+#             */
/*   Updated: 2017/07/09 11:55:13 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		res;
	int		i;

	i = 1;
	res = nb;
	if (nb == 0)
		res = 1;
	else if (nb < 13 && nb > 0)
	{
		while (i < (nb - 1))
		{
			res = res * (nb - i);
			i++;
		}
	}
	else
		res = 0;
	return (res);
}
