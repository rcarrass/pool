/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recarras <rcarrass42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 14:30:01 by recarras          #+#    #+#             */
/*   Updated: 2017/07/10 14:47:16 by recarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int		main(int ac, char **av)
{
	int		arg;
	char	*tmp;

	arg = 1;
	while (arg < ac - 1)
	{
		if (ft_strcmp(av[arg], av[arg + 1]) > 0)
		{
			tmp = av[arg];
			av[arg] = av[arg + 1];
			av[arg + 1] = tmp;
			arg = 1;
		}
		else
			arg++;
	}
	arg = 1;
	while (arg < ac)
	{
		ft_putstr(av[arg]);
		ft_putchar('\n');
		arg++;
	}
	return (0);
}
