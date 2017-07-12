#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_words_tables(char **tab);
char	**ft_split_whitespaces(char *str);

int main(int ac, char *av[])
{
	(void)ac;
	ft_print_words_tables(ft_split_whitespaces(av[1]));
	return 0;
}

