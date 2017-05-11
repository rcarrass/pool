int		ft_is_digit(char c)
{
	int	id;

	id = 1;
	if (c > 47 && c < 58)
		id = 1;
	else
		id = 0;
	return id;
}

int		ft_res(char *str, int i)
{
	int res;

	res = 0;
	while (str[i])
	{
		if (ft_is_digit(str[i]) == 1)
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
		else
			break;
	}
	return res;
}

int		ft_atoi(char *str)
{
	int res;
	int i;
	int sign;

	sign = 1;
	res = 0;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == 'r' || str[i] == '\v' || str[i] == '\f')
		i++;
	res = ft_res(str, i);
	return sign*res;
}
