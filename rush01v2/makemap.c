/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makemap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madialli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:09:24 by madiallo          #+#    #+#             */
/*   Updated: 2021/02/15 09:31:26 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_space(char c)
{
	return (c == ' ');
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_arg_valid(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (*str)
	{
		if ((check_space(*str) == 0) && (*str >= '1' && *str <= '4'))
			i++;
		str++;
	}
	return (i);
}

void	populate_arg(int *col, int *raw)
{
	if (*raw == 0 && *col > 4)
	{
		*raw = 5;
		*col = 1;
	}
	else if (*raw == 5 && *col > 4)
	{
		*raw = 1;
		*col = 0;
	}
	else if (*raw > 4 && *col == 0)
	{
		*raw = 1;
		*col = 5;
	}
}
