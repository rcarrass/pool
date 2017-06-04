#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define CYN "\x1B[36m"
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
/*char	*ft_strcapitalize(char *str);*/
int		my_str_isalpha(char *str);
int		ft_str_is_alpha(char *str);
int		my_str_isnumeric(char *str);
int		ft_str_is_numeric(char *str);
int		my_str_islowercase(char *str);
int		ft_str_is_lowercase(char *str);
int		my_str_isuppercase(char *str);
int		ft_str_is_uppercase(char *str);
int		my_str_isprintable(char *str);
int		ft_str_is_printable(char *str);
//char	*strcat(char *dst,char *src);

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
			printf(" -- strncmp -- \n%d\n\n", strncmp(av[2], av[3], atoi(av[4])));
			printf("-- ft_strncmp --\n");
			printf("%d", ft_strncmp(av[2], av[3], atoi(av[4])));
		}
		else
		{
			printf("Compare %d characters in s1: %sCompare %d characters in s2: %s\n", n, s1, n, s2);
			printf("Compare %d characters in s1b: %sCompare %d characters in s2b: %s\n", n1, s1b, n1, s2b);
			printf(" -- strncmp -- \n");
			printf("%d characters compared in S1 and S2: %d\n", n, strncmp(s1, s2, n));
			printf("%d characters compared in S1b and S2b: %d\n\n", n1, strncmp(s1b, s2b, n1));
			printf(" -- ft_strcmp -- \n");
			printf("%d characters compared in S1 and S2: %d\n", n, ft_strncmp(s1, s2, n));
			printf("%d characters compared in S1b and S2b: %d\n\n", n1, ft_strncmp(s1b, s2b, n1));
		}
	}

	if (atoi(av[1]) == 8)
	{
		printf("\t -| 'EX08' FT_STRUPCASE |-\n\n");
		char s1[] = "this string has all of it's character as lowcase";
		char s2[] = "THIS STRING HAS ALL OF IT'S CHARACTER OS UPPERCASE";

		if (ac > 2)
		{
			printf("-- ft_strupcase --\n");
			printf("Your String: %s\n%s", av[2], ft_strupcase(av[2]));
		}
		else
		{
			printf("S1: %s\nS2: %s\n\n", s1, s2);	
			printf(" -- ft_strupcase -- \n");
			printf("S1: %s\n", ft_strupcase(s1));
			printf("S2: %s\n", ft_strupcase(s2));
		}
	}

	if (atoi(av[1]) == 9)
	{
		printf("\t -| 'EX09' FT_STRLOWCASE |-\n\n");
		char s1[] = "this string has all of it's character as lowcase";
		char s2[] = "THIS STRING HAS ALL OF IT'S CHARACTER OS UPPERCASE";

		if (ac > 2)
		{
			printf("-- ft_strlowcase --\n");
			printf("Your String: %s\n%s", av[2], ft_strlowcase(av[2]));
		}
		else
		{
			printf("S1: %s\nS2: %s\n\n", s1, s2);	
			printf(" -- ft_strlowcase -- \n");
			printf("S1: %s\n", ft_strlowcase(s1));
			printf("S2: %s\n", ft_strlowcase(s2));
		}
	}/*
		if (atoi(av[1]) == 10)
		{
		printf("\t -| 'EX10' FT_STRCAPITALIZE |-\n\n");
		char s1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

		if (ac > 2)
		{
		printf("-- my_strcapitalize --\n");
		printf("%s\n\n", my_str_capitalize(av[2]));
		printf("-- ft_strcapitalize -- \n");
		printf("%s\n", ft_str_capitalize(av[2]));
		}
		else
		{
		printf("-- my_strcapitalize --\n%s\n\n", my_strcapitalize(s1));
		printf("-- ft_str_capitalize --\n%s\n", ft_str_capitalize(s1));
		}
		}*/
	if (atoi(av[1]) == 11)
	{
		printf(YEL "\t\t -| 'EX11' FT_STR_IS_ALPHA |-\n\n" RESET);
		char s1[] = "string";
		char s2[] = "This one don't";
		char s3[] = "Hello World";

		if (ac > 2)
		{
			printf("- out - \t "BLU "- ft_str_is_alpha - "RESET""GRN" \t - my_str_isalpha -\n\n" RESET);
			if (ft_str_is_alpha(av[2]) != my_str_isalpha(av[2]))
				printf("%s\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", av[2], ft_str_is_alpha(av[2]), my_str_isalpha(av[2]));
			else
				printf(GRN"\t%i\t\t\t%i\n", ft_str_is_alpha(av[2]), my_str_isalpha(av[2]));
			printf(RESET);
		}
		else
		{
			printf("- out - \t\t"BLU " - ft_str_is_alpha - \t "RESET""GRN"- my_str_isalpha -\n\n" RESET);
			if (ft_str_is_alpha(s1) != my_str_isalpha(s1))
				printf("%s\t\t\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s1, ft_str_is_alpha(s1), my_str_isalpha(s1));
			else
				printf("%s\t\t\t\t"GRN"%i\t\t\t%i"RESET"\n",s1, ft_str_is_alpha(s1), my_str_isalpha(s1));
			if (ft_str_is_alpha(s2) != my_str_isalpha(s2))
				printf("%s\t\t\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s2, ft_str_is_alpha(s2), my_str_isalpha(s2));
			else
				printf("%s\t\t\t"GRN"%i\t\t\t%i"RESET"\n",s2, ft_str_is_alpha(s2), my_str_isalpha(s2));
			if (ft_str_is_alpha(s3) != my_str_isalpha(s3))
				printf("%s\t\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s3, ft_str_is_alpha(s3), my_str_isalpha(s3));
			else
				printf("%s\t\t\t\t"GRN"%i\t\t\t%i"RESET"\n",s3, ft_str_is_alpha(s3), my_str_isalpha(s3));
		}
	}
	if (atoi(av[1]) == 12)
	{
		printf(YEL "\t\t -| 'EX12' FT_STR_IS_NUMERIC |-\n\n" RESET);
		char s1[] = "Numeric: 101";
		char s2[] = "42 101";
		char s3[] = "101";

		if (ac > 2)
		{
			printf("- out - \t "BLU "- ft_str_is_numeric - "RESET""GRN" \t - my_str_isnumeric -\n\n" RESET);
			if (ft_str_is_numeric(av[2]) != my_str_isnumeric(av[2]))
				printf("%s\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", av[2], ft_str_is_numeric(av[2]), my_str_isnumeric(av[2]));
			else
				printf(GRN"\t%i\t\t\t%i\n", ft_str_is_numeric(av[2]), my_str_isnumeric(av[2]));
			printf(RESET);
		}
		else
		{
			printf("- out - \t\t"BLU " - ft_str_is_numeric -\t "RESET""GRN"- my_str_isnumeric -\n\n" RESET);
			if (ft_str_is_numeric(s1) != my_str_isnumeric(s1))
				printf("%s\t\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s1, ft_str_is_numeric(s1), my_str_isnumeric(s1));
			else
				printf("%s\t\t\t"GRN"%i\t\t\t%i"RESET"\n",s1, ft_str_is_numeric(s1), my_str_isnumeric(s1));
			if (ft_str_is_numeric(s2) != my_str_isnumeric(s2))
				printf("%s\t\t\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s2, ft_str_is_numeric(s2), my_str_isnumeric(s2));
			else
				printf("%s\t\t\t\t"GRN"%i\t\t\t%i"RESET"\n",s2, ft_str_is_numeric(s2), my_str_isnumeric(s2));
			if (ft_str_is_numeric(s3) != my_str_isnumeric(s3))
				printf("%s\t\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s3, ft_str_is_numeric(s3), my_str_isnumeric(s3));
			else
				printf("%s\t\t\t\t"GRN"%i\t\t\t%i"RESET"\n",s3, ft_str_is_numeric(s3), my_str_isnumeric(s3));
		}
	}
	if (atoi(av[1]) == 13)
	{
		printf(YEL "\t\t -| 'EX13' FT_STR_IS_LOWERCASE |-\n\n" RESET);
		char s1[] = "numeric lower";
		char s2[] = "numeric Notlower";
		char s3[] = "numeric lower 101";

		if (ac > 2)
		{
			printf("- out - \t "BLU "- ft_str_is_lowercase - "RESET""GRN" \t - my_str_islowercase -\n\n" RESET);
			if (ft_str_is_lowercase(av[2]) != my_str_islowercase(av[2]))
				printf("%s\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", av[2], ft_str_is_lowercase(av[2]), my_str_islowercase(av[2]));
			else
				printf(GRN"\t%i\t\t\t%i\n", ft_str_is_lowercase(av[2]), my_str_islowercase(av[2]));
			printf(RESET);
		}
		else
		{
			printf("- out - \t\t"BLU " - ft_str_is_lowercase - "RESET""GRN"- my_str_islowercase -\n\n" RESET);
			if (ft_str_is_lowercase(s1) != my_str_islowercase(s1))
				printf("%s\t\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s1, ft_str_is_lowercase(s1), my_str_islowercase(s1));
			else
				printf("%s\t\t\t"GRN"%i\t\t\t%i"RESET"\n",s1, ft_str_is_lowercase(s1), my_str_islowercase(s1));
			if (ft_str_is_lowercase(s2) != my_str_islowercase(s2))
				printf("%s\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s2, ft_str_is_lowercase(s2), my_str_islowercase(s2));
			else
				printf("%s\t\t"GRN"%i\t\t\t%i"RESET"\n",s2, ft_str_is_lowercase(s2), my_str_islowercase(s2));
			if (ft_str_is_lowercase(s3) != my_str_islowercase(s3))
				printf("%s\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s3, ft_str_is_lowercase(s3), my_str_islowercase(s3));
			else
				printf("%s\t\t"GRN"%i\t\t\t%i"RESET"\n",s3, ft_str_is_lowercase(s3), my_str_islowercase(s3));
		}
	}

	if (atoi(av[1]) == 14)
	{
		printf(YEL "\t\t -| 'EX14' FT_STR_IS_UPPERCASE |-\n\n" RESET);
		char s1[] = "NUMERIC UPPER";
		char s2[] = "numeric notUPPER";
		char s3[] = "NUMERIC UPPER 101";

		if (ac > 2)
		{
			printf("- out - \t "BLU "- ft_str_is_uppercase - "RESET""GRN" \t - my_str_isuppercase -\n\n" RESET);
			if (ft_str_is_uppercase(av[2]) != my_str_isuppercase(av[2]))
				printf("%s\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", av[2], ft_str_is_uppercase(av[2]), my_str_isuppercase(av[2]));
			else
				printf(GRN"\t%i\t\t\t%i\n", ft_str_is_uppercase(av[2]), my_str_isuppercase(av[2]));
			printf(RESET);
		}
		else
		{
			printf("- out - \t\t"BLU " - ft_str_is_uppercase - "RESET""GRN"- my_str_isuppercase -\n\n" RESET);
			if (ft_str_is_uppercase(s1) != my_str_isuppercase(s1))
				printf("%s\t\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s1, ft_str_is_uppercase(s1), my_str_isuppercase(s1));
			else
				printf("%s\t\t\t"GRN"%i\t\t\t%i"RESET"\n",s1, ft_str_is_uppercase(s1), my_str_isuppercase(s1));
			if (ft_str_is_uppercase(s2) != my_str_isuppercase(s2))
				printf("%s\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s2, ft_str_is_uppercase(s2), my_str_isuppercase(s2));
			else
				printf("%s\t\t"GRN"%i\t\t\t%i"RESET"\n",s2, ft_str_is_uppercase(s2), my_str_isuppercase(s2));
			if (ft_str_is_uppercase(s3) != my_str_isuppercase(s3))
				printf("%s\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s3, ft_str_is_uppercase(s3), my_str_isuppercase(s3));
			else
				printf("%s\t\t"GRN"%i\t\t\t%i"RESET"\n",s3, ft_str_is_uppercase(s3), my_str_isuppercase(s3));
		}
	}
	if (atoi(av[1]) == 15)
	{
		printf(YEL "\t\t -| 'EX15' FT_STR_IS_PRINTABLE |-\n\n" RESET);
		char s1[] = "printable 12 :?< *";
		char s2[] = "\\./;'[]124!@#$&#$%((*(_*_)";
		char s3[] = "";

		if (ac > 2)
		{
			printf("- out - \t "CYN"- ft_str_is_printable - "RESET""BLU " \t - my_str_isprintable -\n\n" RESET);
			if (ft_str_is_printable(av[2]) != my_str_isprintable(av[2]))
				printf("%s\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", av[2], ft_str_is_printable(av[2]), my_str_isprintable(av[2]));
			else
				printf(GRN"\t%i\t\t\t%i\n", ft_str_is_printable(av[2]), my_str_isprintable(av[2]));
			printf(RESET);
		}
		else
		{
			printf("- out - \t\t"CYN" - ft_str_is_printable -  "RESET""BLU "- my_str_isprintable -\n\n" RESET);
			if (ft_str_is_printable(s1) != my_str_isprintable(s1))
				printf("%s\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s1, ft_str_is_printable(s1), my_str_isprintable(s1));
			else
				printf("%s\t\t"GRN"%i\t\t\t%i"RESET"\n",s1, ft_str_is_printable(s1), my_str_isprintable(s1));
			if (ft_str_is_printable(s2) != my_str_isprintable(s2))
				printf("%s\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s2, ft_str_is_printable(s2), my_str_isprintable(s2));
			else
				printf("%s\t"GRN"%i\t\t\t%i"RESET"\n",s2, ft_str_is_printable(s2), my_str_isprintable(s2));
			if (ft_str_is_printable(s3) != my_str_isprintable(s3))
				printf("%s\t\t\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", s3, ft_str_is_printable(s3), my_str_isprintable(s3));
			else
				printf("%s\t\t\t\t"GRN"%i\t\t\t%i"RESET"\n",s3, ft_str_is_printable(s3), my_str_isprintable(s3));
		}
		/*
		if (atoi(av[1]) == 16)
		{
			printf(YEL "\t\t -| 'EX16' FT_STRCAT |-\n\n" RESET);
			char src1[] = "and it works as i wish :)";
			char dst1[] = "I want to concatenate these strings";
			char src2[] = "This string is so huge besind of the other one Oo";
			char dst2[] = "smally one";

			if (ac > 2)
			{
				printf("- out - \t\t"CYN" - ft_strcat - \t"RESET""GRN"- strcat -\n\n" RESET);
				if (ft_strcat(av[2], av[3]) != strcat(av[2], av[3]))
					printf("%s\t\t"RED"%s"RESET"\t\t\t"GRN"%s"RESET"\n", av[2], ft_strcat(av[2], av[3]), strcat(av[2], av[3]));
				else
					printf(""GRN"\t%s\t\t\t%s\n", ft_strcat(av[2], av[3]), strcat(av[2], av[3]));
				printf(RESET);
			}
			else
			{
				printf("- out - \t\t"CYN" - ft_strcat -  "RESET""BLU "- my_strcat -\n\n" RESET);
			if (strcmp(ft_strcat(dst1, src1), strcat(dst1, src1)) != 0))
				printf("%s\t\t"RED"%s"RESET"\t\t\t"GRN"%s"RESET"\n", dst1, ft_strcat(dst1, src1), strcat(dst1, src1));
			else
				printf("%s\t\t"GRN"%s\t\t\t%s"RESET"\n", dst1, ft_strcat(dst1, src1), strcat(dst1, src1));
			if (ft_strcat(dst2, src2) != strcat(dst2, src2))
				printf("%s\t"RED"%s"RESET"\t\t\t"GRN"%s"RESET"\n", dst2, ft_strcat(dst2, src2), strcat(dst2, src2));
			else
				printf("%s\t"GRN"%s\t\t\t%s"RESET"\n",dst2, ft_strcat(dst2, src2), strcat(dst2, src2));
			}
		}*/
	}
}
