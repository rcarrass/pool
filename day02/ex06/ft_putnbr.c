/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 10:25:57 by rcarrass          #+#    #+#             */
/*   Updated: 2017/03/13 19:48:57 by rcarrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putnbr(nb / 10 + '0');
			ft_putnbr(48);
		}
		else
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
	}
	else if (nb > 9)
	{
		if (nb <= 2147483647)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
int main()
{
	ft_putnbr(4551215);
	return (0);
}
