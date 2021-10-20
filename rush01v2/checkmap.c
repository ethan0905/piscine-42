/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiallo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:11:50 by madiallo          #+#    #+#             */
/*   Updated: 2021/02/16 16:13:05 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_uniaue(int tab[6][6], int col, int raw, int val)
{
	int	j;

	j = 1;
	val = tab[raw][col];
	if (val > 4 || val < 1)
		return (0);
	while (j > 0 && j < 5)
	{
		if (j == col)
			j++;
		if (tab[raw][j] == val && j != 5)
			return (0);
		j++;
	}
	j = 1;
	while (j > 0 && j < 5)
	{
		if (j == raw)
			j++;
		if (tab[j][col] == val && j != 5)
			return (0);
		j++;
	}
	return (1);
}

int	check_raw_left(int tab[6][6], int raw, int hauteurmax, int count)
{
	int	i;
	int	val_exp;

	while (raw < 5)
	{
		i = 1;
		hauteurmax = 0;
		count = 0;
		val_exp = tab[raw][0];
		if (val_exp > 4 || val_exp < 1)
			return (0);
		while (i > 0 && i < 5)
		{
			if (tab[raw][i] > hauteurmax)
			{
				hauteurmax = tab[raw][i];
				count++;
			}
			i++;
		}
		if (!(count == val_exp))
			return (0);
		raw++;
	}
	return (1);
}

int	check_raw_right(int tab[6][6], int raw, int hauteurmax, int count)
{
	int	i;
	int	val_exp;

	while (raw < 5)
	{
		i = 4;
		hauteurmax = 0;
		count = 0;
		val_exp = tab[raw][5];
		if (val_exp > 4 || val_exp < 1)
			return (0);
		while (i > 0)
		{
			if (tab[raw][i] > hauteurmax)
			{
				hauteurmax = tab[raw][i];
				count++;
			}
			i--;
		}
		if (!(count == val_exp))
			return (0);
		raw++;
	}
	return (1);
}

int	check_col_up(int tab[6][6], int col, int hauteurmax, int count)
{
	int	i;
	int	val_exp;

	while (col < 5)
	{
		i = 1;
		hauteurmax = 0;
		count = 0;
		val_exp = tab[0][col];
		if (val_exp > 4 || val_exp < 1)
			return (0);
		while (i > 0 && i < 5)
		{
			if (tab[i][col] > hauteurmax)
			{
				hauteurmax = tab[i][col];
				count++;
			}
			i++;
		}
		if (!(count == val_exp))
			return (0);
		col++;
	}
	return (1);
}

int	check_col_down(int tab[6][6], int col, int hauteurmax, int count)
{
	int	i;
	int	val_exp;

	while (col < 5)
	{
		i = 4;
		hauteurmax = 0;
		count = 0;
		val_exp = tab[5][col];
		if (val_exp > 4 || val_exp < 1)
			return (0);
		while (i > 0 && i < 5)
		{
			if (tab[i][col] > hauteurmax)
			{
				hauteurmax = tab[i][col];
				count++;
			}
			i--;
		}
		if (count != val_exp)
			return (0);
		col++;
	}
	return (1);
}
