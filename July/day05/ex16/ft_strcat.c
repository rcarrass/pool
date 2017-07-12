/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 01:29:34 by recarras          #+#    #+#             */
/*   Updated: 2017/07/11 13:52:35 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
