/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 01:25:07 by recarras          #+#    #+#             */
/*   Updated: 2017/07/11 12:21:25 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				res;

	res = 0;
	i = 0;
	if (s1[0] == '\0' || s2[0] == '\0')
		return (s1[0] - s2[0]);
	while (i < n)
	{
		while (s1[i])
		{
			if (s1[i] > s2[i])
				return (-(s2[i] - s1[i]));
			else if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	}
	return (res);
}
