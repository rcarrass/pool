/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 18:20:18 by rcarrass          #+#    #+#             */
/*   Updated: 2017/03/25 19:23:31 by rcarrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/uio.h>
#include<sys/types.h>
int main()
{
	char tab[2];
	int ret_read;
	int i_bn; // nombre de backslash n
	int i; // common iterator
	char *dst;
	
	i = 0;
	i_bn = 0;
//	if (!(tab = (char*)malloc(sizeof(char) * 500)))
//		return 0;
	while ((ret_read = read(0, tab, 1)))
	{
		dst = (char*)malloc(sizeof(char) * i + 1);
		dst[i] = tab[0];
		i++;
	}
//	tab[i] = '\0';
	printf("%s",dst);
	return 0;
}
