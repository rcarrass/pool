#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int i, int j, int k, int l)
{
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(k + '0');
	ft_putchar(l + '0');
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	k = 0;
	l = 1;
	while (i <= 9)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				while (l <= 9)
				{
					ft_print_numbers(i, j, k, l);
					l++;
				}
				k++;
				l = 0;
			}
			j++;
			k = 0;
			l = 1;
		}
		i++;
		j = 0;
	}
}
