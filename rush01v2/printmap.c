/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiallo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:10:44 by madiallo          #+#    #+#             */
/*   Updated: 2021/02/15 09:49:49 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		place_ind(int tab[6][6], char *str)
{
	int	col;
	int	raw;

	col = 1;
	raw = 0;
	if (ft_arg_valid(str) != 16)
		return (0);
	while (*str)
	{
		if (check_space(*str) == 1)
			str++;
		else
		{
			populate_arg(&col, &raw);
			tab[raw][col] = *str - '0';
			if ((raw == 0 || raw == 5) && (col > 0 && col < 5))
				col++;
			if ((col == 0 || col == 5) && (raw > 0 && raw < 5))
				raw++;
			str++;
		}
	}
	return (0);
}

void	print_table(int tab[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			ft_putchar(tab[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
