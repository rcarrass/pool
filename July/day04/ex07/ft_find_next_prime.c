/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 16:46:14 by recarras          #+#    #+#             */
/*   Updated: 2017/07/09 11:12:32 by recarras         ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	int		next_prime;
	int		i;

	i = 0;
	next_prime = 0;
	if (ft_is_prime1(nb))
		next_prime = nb;
	else
	{
		while (ft_is_prime1(nb + i) == 0)
		{
			i++;
		}
		next_prime = nb + i;
	}
	return (next_prime);
}
