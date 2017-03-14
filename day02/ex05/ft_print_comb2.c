/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 09:33:11 by rcarrass          #+#    #+#             */
/*   Updated: 2017/03/13 17:30:09 by rcarrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printmchar(char *array)
{
	ft_putchar(array[0]);
	ft_putchar(array[1]);
	ft_putchar(' ');
	ft_putchar(array[2]);
	ft_putchar(array[3]);
	ft_putchar(',');
	ft_putchar(' ');
}

void	the_end(void)
{
	ft_putchar('9');
	ft_putchar('8');
	ft_putchar(' ');
	ft_putchar('9');
	ft_putchar('9');
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	array[4];

	a = 0;
	b = 0;
	while (a < 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			array[0] = '0' + (a / 10);
			array[1] = '0' + (a % 10);
			array[2] = '0' + (b / 10);
			array[3] = '0' + (b % 10);
			ft_printmchar(array);
			b++;
		}
		a++;
	}
	the_end();
}
int main()
{
	ft_print_comb2();
	return 0;

}
