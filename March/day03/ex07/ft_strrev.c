/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 16:04:08 by rcarrass          #+#    #+#             */
/*   Updated: 2017/03/13 17:45:46 by rcarrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	char	tmp;
	int		cnt;
	int		j;

	cnt = 0;
	j = 0;
	while (str[cnt])
	{
		cnt--;
		while (++j < --cnt)
		{
			tmp = str[j];
			str[j] = str[cnt];
			str[cnt] = tmp;
		}
	}
	return (str);
}
