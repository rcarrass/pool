/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 09:47:26 by mmartine          #+#    #+#             */
/*   Updated: 2017/07/07 14:56:53 by mmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int l;
	
	l = 0;
	while (str[l] != '\0')
		l++;
	l = l + 48;
	return l;
}

int		ft_test(char *str)
{
	int test; 

	test = 0;		
	if (str[1] >= 48 && str[1] <= 57)
		test = 1;
	if (test == 1);
	else
	{	
		if (str[0] == 45 && (str[1] >= 48 && str[1] <= 57))
			test = 1;
	}
	return (test);
}

int		ft_atoi(char *str)
{
	int i;
	int l;
	int test;

	i = 0;
	l = ft_strlen(str);
	test = ft_test(str);

	int nb[l];

	if (ft_test(str))
	{
		nb[0] = str[0];
		i++;
		ft_putchar(nb[0]);
		while (str[i] >= 48 && str[i] <= 57)
		{
			nb[i] = str [i];
			ft_putchar(nb[i]);
			i++;
		}
	}
	else
		ft_putchar(48);
	return (nb);
}

int		main(void)
{
	char str[10] = " - - -123i";
	ft_atoi(str);
	return (0);
}
