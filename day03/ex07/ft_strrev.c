/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 00:45:39 by recarras          #+#    #+#             */
/*   Updated: 2017/07/08 12:03:01 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	swp;

	i = 0;
	length = ft_strlen(str) - 1;
	while (i <= length)
	{
		swp = str[i];
		str[i] = str[length];
		str[length] = swp;
		i++;
		length--;
	}
	return (str);
}
