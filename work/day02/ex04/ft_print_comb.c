#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_end(void)
{
	ft_putchar('7');
	ft_putchar('8');
	ft_putchar('9');

}

void	ft_print_numbers(int i, int j, int k)
{

	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(k + '0');
	ft_putchar(',');
	ft_putchar(' ');

}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = i + 1;
	k = i + 2;
	while (i <= 6)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				ft_print_numbers(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	ft_put_end();
}
