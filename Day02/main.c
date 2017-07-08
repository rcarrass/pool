#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
int		ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	(void)argc;
	if (argv[1][0] == '5')
	{
		printf("\nex05 :");
		ft_putstr(argv[2]);	
	}
	if (argv[1][0] == '6')
		printf("\nex06 : %d", ft_strlen(argv[2]));
	if (argv[1][0] == '7')
		printf("\nex07 : %s", ft_strrev(argv[2]));
	if (argv[1][0] == '8')
	{
		printf("Expected : %d\n", atoi("789 test"));
		printf("Mine : %d\n", ft_atoi("789 test"));
		printf("Expected : %d\n", atoi("-789 895 test"));
		printf("Mine : %d\n", ft_atoi("-789 895 test"));
		printf("Expected : %d\n", atoi("\t\n\r\v\f789 895 test"));
		printf("Mine : %d\n", ft_atoi("\t\n\r\v\f789 895 test"));
		printf("Expected : %d\n", atoi("     789 895 test"));
		printf("Mine : %d\n", ft_atoi("      789 895 test"));
	}
	return (0);

}
