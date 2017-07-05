/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:24:52 by rcarrass          #+#    #+#             */
/*   Updated: 2017/03/24 10:35:21 by rcarrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		arg;
	char	*tmp;

	arg = 1;
	while (arg < argc - 1)
	{
		if (ft_strcmp(argv[arg], argv[arg + 1]) > 0)
		{
			tmp = argv[arg];
			argv[arg] = argv[arg + 1];
			argv[arg + 1] = tmp;
			arg = 1;
		}
		else
			arg++;
	}
	arg = 1;
	while (arg < argc)
	{
		ft_putstr(argv[arg]);
		ft_putchar('\n');
		arg++;
	}
	return (0);
}
