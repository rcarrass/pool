/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 00:45:39 by recarras          #+#    #+#             */
/*   Updated: 2017/07/06 00:25:06 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define PAIR(x) ^x % 3 = 0

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	swp;

	swp = 0;
	i = 0;
	while (str[i])
		i++;
	length = i;
	i = -1;
	if (length % 2 == 0)
	{
		i = -1;
		length -= 2;
	}
	while (++i <= length--)
	{
		swp = str[i];
		str[i] = str[length];
		str[length] = swp;
	}
	return str;
}
#include<stdio.h>
int main()
{
	char str[] = "ABC";
	char str3[] = "123 ABC";
	char str4[] = "ABC 123";
	char str5[] = "ABC    321    ygyweg ";
	char str2[] = "ABC123";
	char str6[] = "1ABC123";

	printf("%s\n", ft_strrev(str));
	printf("%s\n", ft_strrev(str3));
	printf("%s\n", ft_strrev(str4));
	printf("%s\n", ft_strrev(str5));
	printf("%s\n", ft_strrev(str2));
	printf("%s\n", ft_strrev(str6));
}
