/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 16:45:49 by recarras          #+#    #+#             */
/*   Updated: 2017/07/09 19:00:21 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_is_prime1(int nb)
{
	int		is_prime;
	int		i;

	i = 2;
	is_prime = 1;
	if (nb == 1 || nb == 0)
		return (0);
	else if (nb < 0)
		return (0);
	while ((i * i) <= nb && is_prime == 1)
	{
		if ((nb % i) == 0)
			is_prime = 0;
		i++;
	}
	return (is_prime);
}
