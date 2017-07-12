/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 15:49:39 by recarras          #+#    #+#             */
/*   Updated: 2017/07/11 15:51:14 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char	*ft_strcpy(char *s1, char *s2);

int main(int ac, char *av[])
{
	(void)ac;
	printf("%s\n", ft_strcpy(av[1], av[2]));
	printf("%s", strcpy(av[1], av[2]));
}
