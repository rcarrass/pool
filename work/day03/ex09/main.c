#include <unistd.h>
#include <stdio.h>

void	ft_put_in_tab(int *tab, int size);

void	ft_sort_integer_table(int *tab, int size);

int main(int argc, const char *argv[])
{
	int tab[] = {3, 4, 5, 1, 2};
	int tab2[] = {256, 156, 1654, 215, 15681, 145, 51845, 15};
	int size;
	int size2;
	size = 4;
	size2 = 7;

	printf("First Test :\n");
	ft_put_in_tab(tab, size);
	ft_sort_integer_table(tab, size);
	ft_put_in_tab(tab, size);
	printf("\nSecond Test :\n");
	ft_put_in_tab(tab2, size2);
	ft_sort_integer_table(tab2, size2);
	ft_put_in_tab(tab2, size2);
	return 0;
}
