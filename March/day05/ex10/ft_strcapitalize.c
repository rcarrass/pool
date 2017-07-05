/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 14:45:35 by rcarrass          #+#    #+#             */
/*   Updated: 2017/03/20 07:51:22 by rcarrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int a;
	int upper;

	a = 0;
	upper = 1;
	while (str[a] != '\0')
	{
		if ((str[a] >= '0' && str[a] <= '9') ||
				(str[a] >= 'a' && str[a] <= 'z') ||
				(str[a] >= 'A' && str[a] <= 'Z'))
		{
			if (upper && (str[a] >= 'a' && str[a] <= 'z'))
				str[a] = str[a] - 32;
			else if (!upper && (str[a] >= 'A' && str[a] <= 'Z'))
				str[a] = str[a] + 32;
			upper = 0;
		}
		else
			upper = 1;
		a++;
	}
	return (str);
}
