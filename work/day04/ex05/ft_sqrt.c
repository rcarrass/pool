int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i <= 46341)
	{
		if ((i * i) == nb)
			return i;
		else
			i++;
	}
	return 0;
}
