/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 01:33:46 by recarras          #+#    #+#             */
/*   Updated: 2017/07/11 13:54:17 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		dsize;
	int		j;

	i = 0;
	j = 1;
	dsize = 0;
	while (dest[dsize])
		dsize++;
	while (j <= nb)
	{
		while (src[i] && dsize < i)
		{
			dest[dsize] = src[i];
			i++;
			dsize++;
		}
		j++;
	}
	dest[dsize] = '\0';
	return (dest);
}
