/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:07:35 by esafar            #+#    #+#             */
/*   Updated: 2021/09/09 12:15:14 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_bis;
	int		size;

	nbr_bis = nbr;
	size = ft_strlen(base);
	if (ft_check_base(base))
	{
		if (nbr < 0)
		{
			nbr_bis = nbr_bis * -1;
			ft_putchar('-');
		}
		if (nbr_bis >= size)
			ft_putnbr_base((nbr_bis / size), base);
		ft_putchar(base[nbr_bis % size]);
	}
}

int	main()
{
	ft_putnbr_base(-2, "16");
	return (0);
}
