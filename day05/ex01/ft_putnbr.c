/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 17:22:00 by rcarrass          #+#    #+#             */
/*   Updated: 2017/03/18 12:48:11 by rcarrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_putnbr(int nb)
{
	long long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		nb = n / 10;
		ft_putnbr(nb);
		nb = n % 10;
		ft_putnbr(nb);
	}
	else if (n > 9)
	{
		nb = n / 10;
		ft_putnbr(nb);
		nb = n % 10;
		ft_putnbr(nb);
	}
	else
		ft_putchar(nb + '0');
	return (nb);
}
