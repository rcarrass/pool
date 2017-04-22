#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(int ac, char **av)
{
	printf("\t-| FT_ATOI |-\n");
	if (ac != 2)
	{
		printf("\tStop drink buddy !!!\n");
		return 0;
	}
	printf("\n\t   %d\n", ft_atoi(av[1]));
	printf("\n\t -| ATOI |-\n");
	printf("\n\t   %d\n", atoi(av[1]));

	return 0;
}
