/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiallo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:13:23 by madiallo          #+#    #+#             */
/*   Updated: 2021/02/16 16:23:16 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_solve(int tab[6][6], int col, int iter, int *res)
{
	int	i;
	int	raw;

	raw = (iter / 4) + 1;
	col = (iter % 4) + 1;
	if (iter <= 15 && *res != 1)
	{
		i = 0;
		while (i++ < 5)
		{
			tab[raw][col] = i;
			if (check_uniaue(tab, col, raw, 0))
				ft_solve(tab, col, iter + 1, res);
		}
	}
	if (iter != 16)
		tab[raw][col] = 0;
	if ((iter == 16 && check_col_down(tab, 1, 0, 0) == 1 &&
	check_raw_left(tab, 1, 0, 0) == 1 && check_col_up(tab, 1, 0, 0) == 1 &&
	check_raw_right(tab, 1, 0, 0) == 1))
	{
		print_table(tab);
		return (*res = 1);
	}
	return (0);
}

void	makeboard(int tab[6][6])
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		main(int ac, char **ag)
{
	int	tab[6][6];
	int	res;

	makeboard(tab);
	res = 0;
	if (ac == 2)
	{
		place_ind(tab, ag[1]);
		ft_solve(tab, 1, 0, &res);
		if (res != 1)
			ft_putstr("Error");
	}
	else
		ft_putstr("Error");
	if (res != 1)
		ft_putchar('\n');
	return (0);
}
