/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:06:10 by recarras          #+#    #+#             */
/*   Updated: 2017/07/09 14:07:26 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int ft_count_if(char **tab, int(*f)(char*))
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			res++;
		i++;
	}
	return (res);
}
