#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	char_swp;

	i = 0;
	length = 0;
	while (str[length])
		length++;
	length--;
	while (i <= length)
	{
		char_swp = str[i];
		str[i] = str[length];
		str[length] = char_swp;
		i++;
		length--;
	}
	return (str);
}

