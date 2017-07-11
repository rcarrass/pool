/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:56:04 by recarras          #+#    #+#             */
/*   Updated: 2017/07/06 15:09:00 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int i, int j, int k)
{
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(k + '0');
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_end(void)
{
	ft_putchar(7 + '0');
	ft_putchar(8 + '0');
	ft_putchar(9 + '0');
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = i + 1;
	k = i + 2;
	while (i < 7)
	{
		while (j < 8)
		{
			while (k < 9)
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	ft_end();
}
