/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:58:29 by esafar            #+#    #+#             */
/*   Updated: 2021/02/07 15:10:50 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_horizontal(int x, int j)
{
	int i;

	i = 0;
	while (i++ < x)
	{
		if (i == 1 && j == 1)
			ft_putchar('A');
		else if (i == 1 && j == 2)
			ft_putchar('A');
		else if (i < x)
			ft_putchar('B');
		else
		{
			if (j == 1)
				ft_putchar('C');
			else
				ft_putchar('C');
			ft_putchar('\n');
		}
	}
	if (x == 1)
		ft_putchar('\n');
}

void		ft_print_vertical(int x, int y)
{
	int i;

	i = 0;
	y = y - 2;
	while (y--)
	{
		i = 0;
		while (i++ < x)
		{
			if (i == 1)
				ft_putchar('B');
			else if (i < x)
				ft_putchar(' ');
			else
			{
				ft_putchar('B');
				ft_putchar('\n');
			}
		}
		if (x == 1)
			ft_putchar('\n');
	}
}

void		rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (y == 1)
			ft_print_horizontal(x, 1);
		else if (y == 2)
		{
			ft_print_horizontal(x, 1);
			ft_print_horizontal(x, 2);
		}
		else
		{
			ft_print_horizontal(x, 1);
			ft_print_vertical(x, y);
			ft_print_horizontal(x, 2);
		}
	}
	else
		ft_putchar(' ');
}
