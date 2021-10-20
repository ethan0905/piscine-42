/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 09:33:48 by esafar            #+#    #+#             */
/*   Updated: 2021/02/07 10:29:32 by mtranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_horizontal(int x)
{
	int i;

	i = 0;
	while (i++ < x)
	{
		if (i == 1)
			ft_putchar('o');
		else if (i < x)
			ft_putchar('-');
		else
		{
			ft_putchar('o');
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
				ft_putchar('|');
			else if (i < x)
				ft_putchar(' ');
			else
			{
				ft_putchar('|');
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
			ft_print_horizontal(x);
		else if (y == 2)
		{
			ft_print_horizontal(x);
			ft_print_horizontal(x);
		}
		else
		{
			ft_print_horizontal(x);
			ft_print_vertical(x, y);
			ft_print_horizontal(x);
		}
	}
	else
		ft_putchar(' ');
}
