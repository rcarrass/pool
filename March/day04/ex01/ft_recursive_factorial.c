/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 10:56:52 by rcarrass          #+#    #+#             */
/*   Updated: 2017/03/14 14:53:56 by rcarrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_recursive_factorial(int nb)
{
	if (nb != 1)
	{	
		nb *= ft_recursive_factorial(nb-1);
	}
	return (nb);
}
int		main()
{
	int nb = ft_recursive_factorial(5);	
	printf("%d\n", nb);
	return 0;
}
