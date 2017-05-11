#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define RESET "\x1B[0m"

void	ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);

int		main(int ac, char *av[])
{
	if (atoi(av[1]) == 0)
	{
		printf(BLU "\t -| 'EX00' FT_PUTSTR |-\n\n" RESET);
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
	}

	if (atoi(av[1]) == 1)
	{
		printf(BLU "\t -| 'EX01' FT_PUTNBR |-\n\n" RESET);
		int nb = 101;

		if (ac > 2)
		{
			printf(" -- printf --: \n%d\n\n", atoi(av[2]));
			printf("-- ft_putnbr --\n");
			ft_putnbr(atoi(av[2]));
		}
		else
		{
			printf(" -- printf --: \n%d\n\n", nb);
			printf("-- ft_putnbr --\n");
			ft_putnbr(nb);
		}
	}

	if (atoi(av[1]) == 2)
	{
		printf(BLU "\t-| 'EX02' FT_ATOI |-\n" RESET);
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

	if (atoi(av[1]) == 3)
	{
		printf(BLU "\t -| 'EX03' FT_STRCPY |-\n\n" RESET);
		char src[] = "Hello I want copy this string";
		char dest[30];

		if (ac > 2)
		{
			printf(" -- strcpy --: \n%s\n\n", strcpy(dest, av[2]));
			printf("-- ft_strcpy --\n");
			printf("%s", ft_strcpy(av[2], av[2]));
		}
		else
		{
			printf(" -- strcpy --: \n%s\n\n", strcpy(dest, src));
			printf("-- ft_strcpy --\n");
			printf("%s", ft_strcpy(dest, src));
		}
	}

	if (atoi(av[1]) == 4)
	{
		printf(BLU "\t -| 'EX04' FT_STRNCPY |-\n\n" RESET);
		char src[] = "Hello I want copy 10 characters in this string";
		char dest[30];
		int nb = 10;

		if (ac > 2)
		{
			printf(BLU " -- strncpy --: \n%s\n\n" RESET , strncpy(dest, av[2], atoi(av[3])));
			printf("-- ft_strncpy --\n");
			printf("%s", ft_strncpy(av[2], av[2], atoi(av[3])));
		}
		else
		{
			printf(" -- strncpy --: \n%s\n\n", strncpy(dest, src, nb));
			printf("-- ft_strncpy --\n");
			printf("%s", ft_strncpy(dest, src, nb));
		}
	}
	
	if (atoi(av[1]) == 5)
	{
		printf("\t -| 'EX05' FT_STRSTR |-\n\n");
		char str[] = "This string should match with the S2";
		char to_find[] = "with the S2";
		char str1[] = "This one will not match";
		char to_find1[] = "not match";
		char str2[] = "This one will not match";
		char to_find2[] = "willy match";

		if (ac > 2)
		{
			printf(" -- strstr --: \n%s\n\n", strstr(av[2], av[3]));
			printf("-- ft_strstr --\n");
			printf("%s", ft_strstr(av[2], av[3]));
		}
		else
		{
			printf("str: %s\nto_find: %s\n\n", str, to_find);
			printf("str1: %s\nto_find1: %s\n\n", str1, to_find1);
			printf("str2: %s\nto_find2: %s\n\n", str2, to_find2);
			printf(" -- strstr --\n%s\n%s\n%s\n", strstr(str, to_find), strstr(str1, to_find1),
					strstr(str2, to_find2));
			printf("\n-- ft_strstr --\n%s\n%s\n%s\n", ft_strstr(str, to_find), ft_strstr(str1, to_find1),
					ft_strstr(str2, to_find2));
		}
	}

	if (atoi(av[1]) == 6)
	{
		printf("\t -| 'EX06' FT_STRCMP |-\n\n");
		char s1[] = "\"This string should match with the S2\"\n";
		char s2[] = "\"This string should match with the S2\"\n";
		char s1b[] = "\"This one will not match\"\n";
		char s2b[] = "\"no match\"\n";

		if (ac > 2)
		{
			printf(" -- strcmp --: \n%d\n\n", strcmp(av[2], av[3]));
			printf("-- ft_strcmp --\n");
			printf("%d", ft_strcmp(av[2], av[3]));
		}
		else
		{
			printf("Test s1: %sTest s2: %s\n", s1, s2);
			printf("Test s1b: %sTest s2b: %s\n", s1b, s2b);
			printf(" -- strcmp --: \n");
			printf("S1 compared with S2: %d\n", strcmp(s1, s2));
			printf("S1b compared with S2b: %d\n\n", strcmp(s1b, s2b));
			printf(" -- ft_strcmp --: \n");
			printf("S1 compared with S2: %d\n", ft_strcmp(s1, s2));
			printf("S1b compared with S2b: %d\n", ft_strcmp(s1b, s2b));
		}
	}

	if (atoi(av[1]) == 7)
	{
		printf("\t -| 'EX07' FT_STRNCMP |-\n\n");
		char s1[] = "\"This string should match with the S2\"\n";
		char s2[] = "\"This string should match with the S2\"\n";
		char s1b[] = "\"This one will not match\"\n";
		char s2b[] = "\"not match\"\n";
		int n = 8;
		int n1 = 10;

		if (ac > 2)
		{
			printf(" -- strncmp --: \n%d\n\n", strncmp(av[2], av[3], atoi(av[4])));
			printf("-- ft_strncmp --\n");
			printf("%d", ft_strncmp(av[2], av[3], atoi(av[4])));
		}
		else
		{
			printf("Compare %d characters in s1: %sCompare %d characters in s2: %s\n", n, s1, n, s2);
			printf("Compare %d characters in s1b: %sCompare %d characters in s2b: %s\n", n1, s1b, n1, s2b);
			printf(" -- strncmp --: \n");
			printf("%d characters compared in S1 and S2: %d\n", n, strncmp(s1, s2, n));
			printf("%d characters compared in S1b and S2b: %d\n\n", n1, strncmp(s1b, s2b, n1));
			printf(" -- ft_strcmp --: \n");
			printf("%d characters compared in S1 and S2: %d\n", n, ft_strncmp(s1, s2, n));
			printf("%d characters compared in S1b and S2b: %d\n\n", n1, ft_strncmp(s1b, s2b, n1));
		}
	}

}
