#include <stdlib.h>

void	ft_print_combn(int nb);

int main(int ac, char **av)
{
	if (ac != 2)
		return 0;
	ft_print_combn(atoi(av[1]));
	return 0;
}
