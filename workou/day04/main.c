#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_recursive_power(int nb, int power);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);
int		ft_eight_queens_puzzle(void);

int		main(int ac, char *av[])
{
	/*int p1 = atoi(av[1]);
	int p2 = atoi(av[2]);*/
	if (ac <= 1)
	{
		printf("Input is required\n");
		return 0;
	}
	if (atoi(av[1]) == 0)
	{
		printf("\t-| 'EX00' FT_ITERATIVE_FACTORIAL |-\n\n");
		if (ac > 2)
		{
			printf("Factorial of %d is %d\n", atoi(av[2]), ft_iterative_factorial(atoi(av[2])));
		}
		else
		{
			printf("Factorial of 5 is %d\n", ft_iterative_factorial(5));	
			printf("Factorial of -5 is %d\n", ft_iterative_factorial(-5));	
			printf("Factorial of 10 is %d\n", ft_iterative_factorial(10));	
		}
	}
	if (atoi(av[1]) == 1)
	{
		printf("\t-| 'EX01' FT_RECURSIVE_FACTORIAL |-\n\n");
		if (ac > 2)
		{
			printf("Factorial of %d is %d\n", atoi(av[2]), ft_recursive_factorial(atoi(av[2])));
		}
		else
		{
			printf("Factorial of 5 is %d\n", ft_recursive_factorial(5));	
			printf("Factorial of -5 is %d\n", ft_recursive_factorial(-5));	
			printf("Factorial of 10 is %d\n", ft_recursive_factorial(10));	
		}
	}
	if (atoi(av[1]) == 2)
	{
		printf("\t-| 'EX02' FT_ITERATIVE_POWER |-\n\n");
		if (ac > 2)
		{
			printf("%d power %d is %d\n", atoi(av[2]), atoi(av[3]), ft_iterative_power(atoi(av[2]), atoi(av[3])));
		}
		else
		{
			printf("5 power 2 is %d\n", ft_iterative_power(5, 2));	
			printf("8 power 4 is %d\n", ft_iterative_power(8, 4));	
			printf("42 power 2 is %d\n", ft_iterative_power(42, 2));	
		}
	}
	if (atoi(av[1]) == 3)
	{
		printf("\t-| 'EX03' FT_RECURSIVE_POWER |-\n\n");
		if (ac > 2)
		{
			printf("%d power %d is %d\n", atoi(av[2]), atoi(av[3]), ft_recursive_power(atoi(av[2]), atoi(av[3])));
		}
		else
		{
			printf("5 power 2 is %d\n", ft_recursive_power(5, 2));	
			printf("8 power 4 is %d\n", ft_recursive_power(8, 4));	
			printf("42 power 2 is %d\n", ft_recursive_power(42, 2));	
		}
	}
	if (atoi(av[1]) == 4)
	{
		printf("\t-| 'EX04' FT_FIBONACCI |-\n\n");
		if (ac > 2)
		{
			printf("The %d element of the fibonacci sequence is %d\n", atoi(av[2]), ft_fibonacci(atoi(av[2])));
		}
		else
		{
			printf("The First element of the fibonacci sequence is %d\n", ft_fibonacci(1));
			printf("The Fifth element of the fibonacci sequence is %d\n", ft_fibonacci(5));
			printf("The Eighth element of the fibonacci sequence is %d\n", ft_fibonacci(8));
			printf("The Twentieth element of the fibonacci sequence is %d\n", ft_fibonacci(20));
		}
	}
	
	if (atoi(av[1]) == 5)
	{
		printf("\t-| 'EX05' FT_SQRT |-\n\n");
		if (ac > 2)
		{
			printf("Square root of %d is %d\n", atoi(av[2]), ft_sqrt(atoi(av[2])));
		}
		else
		{
			printf("Square root of 5 is %d\n", ft_sqrt(5));	
			printf("Square root of 42 is %d\n", ft_sqrt(42));	
			printf("Square root of 16 is %d\n", ft_sqrt(16));	
		}
	}

	if (atoi(av[1]) == 6)
	{
		printf("\t-| 'EX06' FT_IS_PRIME |-\n\n");
		if (ac > 2)
		{
			printf("%d Is prime ? %d\n", atoi(av[2]), ft_is_prime(atoi(av[2])));
		}
		else
		{
			printf("5 Is prime ? %d\n", ft_is_prime(5));	
			printf("42 Is prime ? %d\n", ft_is_prime(42));	
			printf("101 Is prime ? %d\n", ft_is_prime(101));	
			printf("-57 Is prime ? %d\n", ft_is_prime(-57));	
		}
	}

	if (atoi(av[1]) == 7)
	{
		printf("\t-| 'EX06' FT_IS_PRIME |-\n\n");
		if (ac > 2)
		{
			printf("Next prime after %d is %d\n", atoi(av[2]), ft_find_next_prime(atoi(av[2])));
		}
		else
		{
			printf("Next prime after 5 is %d\n", ft_find_next_prime(5));	
			printf("Next prime after 42 is %d\n", ft_find_next_prime(42));	
			printf("Next prime after 101 is %d\n", ft_find_next_prime(101));	
			printf("Next prime after -57 is %d\n", ft_find_next_prime(-57));	
		}
	}
	
	return 0;
}
