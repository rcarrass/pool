#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
	
void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_put_in_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size + 1)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int i;

	i = 0;
	while (i <= size)	
	{
		if (tab[i] > tab[i + 1] && i + 1 <= size)
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
