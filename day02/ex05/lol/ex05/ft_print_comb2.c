/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:28:55 by recarras          #+#    #+#             */
/*   Updated: 2017/07/05 14:12:39 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char	array[4];
   
	array[0] = 0;
	array[1] = 0;
	array[1] = 0;
	array[1] = 1;
	while (!((array[0] == 9) && (array[1] == 9)))
	{
		ft_putchar(array[0] + 48);
		ft_putchar(array[1] + 48);
		ft_putchar(' ');
		ft_putchar(array[2] + 48);
		ft_putchar(array[3] + 48);
		if (!((array[0] == 9) && (array[1] == 8)))
			ft_putchar(',');
		if (!((array[0] == 9) && (array[1] == 8)))
			ft_putchar(' ');
		array[3]++;
		if ((array[3] = array[3] % 10) == 0)
			array[2] = (array[2] + 1);
		if (array[2] == 10)
		{
			array[2] = array[0];
			array[1]++;
			if (( array[1] = array[1] % 10) == 0)
				array[0]++;
			array[3] = array[1] + 1;
		}
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}
