/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 09:23:28 by rcarrass          #+#    #+#             */
/*   Updated: 2017/03/14 11:20:40 by rcarrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int		ft_iterative_factorial(int nb)
{
	int		i;
	int		fact;

	fact = 1;
	i = 1;
	while (++i < nb + 1)
	{
		fact *= i;
		
	}
	printf("%i", fact);
	return fact;

}
int main()
{
	ft_iterative_factorial(10);
	return 0;
}
