#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (str[i])
	{
		ft_putchar(str[j]);
		i++;
		j--;
	}
	return (str);
}
