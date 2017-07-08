/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcecile- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:17:46 by lcecile-          #+#    #+#             */
/*   Updated: 2017/07/08 22:07:38 by lcecile-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int actual;

	actual = 'a';
	while (actual < 'z')
	{
		
		c++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
