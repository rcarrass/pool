/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:37:32 by rcarrass          #+#    #+#             */
/*   Updated: 2017/03/24 12:35:17 by rcarrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	if (s1[0] == '\0' || s2[0] == '\0')
		return (s1[0] - s2[0]);
	while (s1[i])
	{
		if (s1[i] > s2[i])
			return (-(s2[i] - s1[i]));
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (res);
}
