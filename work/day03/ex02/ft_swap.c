# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_swap                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/05 00:07:50 by recarras          #+#    #+#              #
#    Updated: 2017/07/05 00:10:30 by recarras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;	
}
