void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmpdiv;
	int tmpmod;

	tmpdiv = (a / b);
	tmpmod = (a % b);
	*a = tmpdiv;
	*b = tmpmod;
	printf("%d\n", a);
	printf("%d\n", b);
}
