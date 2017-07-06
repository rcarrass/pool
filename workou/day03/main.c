#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
char	*ft_strrev(char *str);
void	ft_sort_integer_table(int *tab, int size);

int		main(int ac, char **av)
{
	if (ac <= 1)
	{
		printf("You must put a number after \".a/.out\"");
		return 0;
	}
	if (atoi(av[1]) == 0 || atoi(av[1]) <= 1 ||
			atoi(av[1]) == 3 || atoi(av[1]) == 4 || atoi(av[1]) > 9)
	{
		printf("Bad Choice :)\nOnly Available: 2, 5, 6, 7, 8, 9");
	}
	else
	{
		if (atoi(av[1]) == 2)
		{
			printf("\t-| 'EX02' FT_SWAP |-\n\n");
			int	tab[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
			int i = -1;
			
			if (ac > 2)
			{
				printf(" --Tab Values Before SWAP: --\n");
				while (++i < 11)
					printf("%d, ", tab[i]);
				printf("%d\n", tab[11]);
				ft_swap(&tab[atoi(av[2]) - 1], &tab[atoi(av[3]) - 1]);
				i = -1;
				printf("\n -- Tab Values After SWAP: --\n");
				while (++i < 11)
					printf("%d, ", tab[i]);
				printf("%d\n", tab[11]);
			}

			else
			{
				printf(" --Tab Values Before SWAP: --\n");
				while (++i < 11)
					printf("%d, ", tab[i]);
				printf("%d\n", tab[11]);
				ft_swap(&tab[4], &tab[8]);
				i = -1;
				printf("\n -- Tab Values After SWAP: --\n");
				while (++i < 11)
					printf("%d, ", tab[i]);
				printf("%d\n", tab[11]);
				printf("Values to swap: 5 & 9\n");
			}
		}

		if (atoi(av[1]) == 5)
		{
			printf("\t-| 'EX05' FT_PUTSTR |-\n\n");
			char str[] = "Welcome at 101, enjoy the first pool :)";
			
			if (ac > 2)
			{
				printf(" -- printf --: \n%s\n\n", av[2]);
				printf("-- ft_putstr --\n");
				ft_putstr(av[2]);
			}
			else	
			{
				printf(" -- printf --: \n%s\n\n", str);
				printf("-- ft_putstr --\n");
				ft_putstr(str);
			}
			printf("\n");
		}

		if (atoi(av[1]) == 6)
		{
			printf("\t-| 'EX06' FT_STRLEN |-\n\n");
			char str[] = "abcdefghijklmnopqrstuvwxyz";
			if (ac > 2)
			{
				printf(" -- STRLEN --\n%s\nLength: %zd\n\n", av[2], strlen(av[2]));
				printf(" -- FT_STRLEN --\n%s\nLength: %d\n\n", av[2], ft_strlen(av[2]));
			}
			else
			{
				printf(" -- STRLEN --\n%s\nLength: %zd\n\n", str, strlen(str));
				printf(" -- FT_STRLEN --\n%s\nLength: %d\n", str, ft_strlen(str));
			}
		}

		if (atoi(av[1]) == 7)
		{
			printf("\t-| 'EX07' FT_STRREV |-\n");
			char str[] = "Cent un c'est bien";
			if (ac > 2)
			{
				printf("\n -- String To Reverse: --\n%s\n\n", av[2]);
				printf("  -- Reversed String: --\n");
				ft_strrev(av[2]);
			}
			else
			{
				printf("\n -- String To Reverse: --\n%s\n\n", str);
				printf("  -- Reversed String: --\n");
				ft_strrev(str);
			}
		}

		if (atoi(av[1]) == 8)
		{
			printf("\t-| 'EX08' FT_ATOI |-\n");
			char str1[] = "ABC 123  "; 
			char str2[] = "123 VIM"; 
			char str3[] = "-123 zsh"; 
			if (ac > 2)
			{
				printf("\n -- ft_atoi --\n%d\n", ft_atoi(av[2]));
				printf("\n -- atoi --\n%d\n", atoi(av[2]));
			}
			else
			{
				printf("\nValues Tested:\n\n\"%s\"||\"%s\"||\"%s\"\n", str1, str2, str3);
				printf("\n -- ft_atoi --\n   %d\t\t %d\t\t%d\n", ft_atoi(str1),  ft_atoi(str2),  ft_atoi(str3));
				printf("\n -- atoi --\n   %d\t\t %d\t\t%d\n", atoi(str1), atoi(str2), atoi(str3));
			}
		}
		if (atoi(av[1]) == 9)
		{
			printf("\t-| 'EX09' FT_SORT_INTEGER_TABLE |-\n");
			int size = 7;
			int tab[7] = {42, 101, 2017, 9, 28, 10, -1};
			int i = -1;
			printf("\n -- Tab Values Before Sort --\n");
			while (++i < size - 1)
				printf("%d, ", tab[i]);
			printf("%d.\n", tab[6]);
			ft_sort_integer_table(tab, size);
			i = -1;
			printf("\n -- Tab Values After Sort --\n");
			while (++i < size - 1)
				printf("%d, ", tab[i]);
			printf("%d.\n", tab[6]);
		}
	}
	return 0;
}
