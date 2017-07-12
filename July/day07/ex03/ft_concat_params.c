/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:17:10 by recarras          #+#    #+#             */
/*   Updated: 2017/07/12 00:04:33 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		dsize;

	i = 0;
	dsize = 0;
	while (dest[dsize])
		dsize++;
	while (src[i])
	{
		dest[dsize] = src[i];
		i++;
		dsize++;
	}
	dest[dsize] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*tab;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (!(tab = (char *)malloc(sizeof(char) * (argc - 1))))
		return (0);
	while (i < argc)
	{
		ft_strcat(tab, argv[i]);
		if (i < argc - 1)
			ft_strcat(tab, "\n");
		i++;
		j++;
	}
	return (tab);
}
