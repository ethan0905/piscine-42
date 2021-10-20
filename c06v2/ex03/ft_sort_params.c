/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 08:00:38 by esafar            #+#    #+#             */
/*   Updated: 2021/02/22 11:23:33 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

void	ft_print(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	char	*lanuitetoilee;

	i = 1;
	if (ac > 1)
	{
		while (i < ac - 1)
 		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				lanuitetoilee = av[i];
				av[i] = av[i + 1];
				av[i + 1] = lanuitetoilee;
				i = 0;
			}
			i++;
		}
		ft_print(ac, av);
	}
	return (0);
}
