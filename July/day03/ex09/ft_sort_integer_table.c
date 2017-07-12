/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:43:46 by recarras          #+#    #+#             */
/*   Updated: 2017/07/08 14:15:58 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		swp;

	i = 0;
	swp = 0;
	while (i <= size)
	{
		if (tab[i] > tab[i + 1])
		{
			swp = tab[i];
			tab[i]= tab[i + 1];
			tab[i + 1] = tab[i];
			i = 0;
		}
		i++;
	}

}
#include<stdio.h>
int main()
{
	int size = 10;
	int tab[11] = {5,9,1,654,2017,42,101,10,25,6};
	int i = 0;

	ft_sort_integer_table(tab, size);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
