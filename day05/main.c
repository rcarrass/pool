#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);

int		main(int argc, char **argv)
{
	(void)argc;
	char dest[] = "test";
	char src[] = "iuasfiuh j";
	
	if (atoi(argv[1]) == 0)
	{
		printf("EX00 :\n");
		ft_putstr(argv[2]);
	}
	if (atoi(argv[1]) == 1)
	{
		printf("EX01 : \n");
		ft_putnbr(atoi(argv[2]));
	}
	if (atoi(argv[1]) == 2)
	{
		printf("EX02 :\n");
		printf("Expected : %d\n", atoi("789 test"));
		printf("Mine	 : %d\n", ft_atoi("789 test"));
		printf("Expected : %d\n", atoi("-789 895 test"));
		printf("Mine	 : %d\n", ft_atoi("-789 895 test"));
		printf("Expected : %d\n", atoi("\t\n\r\v\f789 895 test"));
		printf("Mine 	 : %d\n", ft_atoi("\t\n\r\v\f789 895 test"));
		printf("Expected : %d\n", atoi("     789 895 test"));
		printf("Mine 	 : %d\n", ft_atoi("      789 895 test"));
		printf("Expected : %d\n", atoi("-+789"));
		printf("Mine 	 : %d\n", ft_atoi("-+789"));
		printf("Expected : %d\n", atoi("--789"));
		printf("Mine     : %d\n", ft_atoi("--789"));
	}
	if (atoi(argv[1]) == 3)
	{
		printf("EX03 :\n");
		printf("Expected : %s\n", strcpy(argv[2], argv[3]));
		printf("Mine	 : %s\n", ft_strcpy(argv[2], argv[2]));
	}
	if (atoi(argv[1]) == 4)
	{
		printf("EX04 :\n");
		printf("Expected : %s\n", strncpy(argv[2], argv[3], atoi(argv[4])));
		printf("Mine	 : %s", ft_strncpy(argv[2], argv[3], atoi(argv[4])));
	}
	if (atoi(argv[1]) == 5)
	{
		printf("EX05 :\n");
		printf ("Expected : %s\n", strstr(argv[2], argv[3]));
		printf("Mine     : %s", ft_strstr(argv[2], argv[3]));
	}
	if (atoi(argv[1]) == 6)
	{
		printf("EX 06 :\n");
		printf("Expected : %d\n", strcmp(argv[2], argv[3]));
		printf("Mine	 : %d\n", ft_strcmp(argv[2], argv[3]));
	}
	if (atoi(argv[1]) == 7)
	{
		printf("EX07 :\n");
		printf("Expected : %d\n", strncmp(argv[2], argv[3], atoi(argv[4])));
		printf("Mine	 : %d\n", ft_strncmp(argv[2], argv[3], atoi(argv[4])));
	}
	if (atoi(argv[1]) == 8)
	{
		printf("EX08 :\n");
		printf("%s\n", ft_strupcase(argv[2]));
	}
	if (atoi(argv[1]) == 9)
	{
		printf("EX09 :\n");
		printf("%s\n", ft_strlowcase(argv[2]));
	}
	if (atoi(argv[1]) == 10)
	{
		printf("EX10 :\n");
		printf("%s\n", ft_strcapitalize(argv[2]));
	}
	if (atoi(argv[1]) == 11)
	{
		printf("EX11 :\n");
		printf("%d\n", ft_str_is_alpha(argv[2]));
	}
	if (atoi(argv[1]) == 12)
	{
		printf("EX12 :\n");
		printf("%d", ft_str_is_numeric(argv[2]));
	}
	if (atoi(argv[1]) == 13)
	{
		printf("EX13 :\n");
		printf("%d", ft_str_is_lowercase(argv[2]));
	}
	if (atoi(argv[1]) == 14)
	{
		printf("EX14 :\n");
		printf("%d", ft_str_is_uppercase(argv[2]));
	}
	if (atoi(argv[1]) == 15)
	{
		printf("EX15 :\n");
		printf("%d\n", ft_str_is_printable(argv[2]));
		printf("%d\n", ft_str_is_printable("test\n"));
	}
	if (atoi(argv[1]) == 16)
	{
		printf("EX16 :\n");
		printf("Expected : %s\n", strcat(dest, src));
		printf("Mine	 : %s\n", ft_strcat(dest, src));
	}
	if (atoi(argv[1]) == 17)
	{
		printf("EX17 :\n");
		printf("Expected : %s\n", strncat(dest, argv[2], atoi(argv[3])));
		printf("Mine	 : %s\n", ft_strncat(dest, argv[2], atoi(argv[3])));
	}
	return (0);
}
