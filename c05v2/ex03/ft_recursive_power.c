/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:11:26 by esafar            #+#    #+#             */
/*   Updated: 2021/02/22 09:31:43 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((power + 1) < 0)
		return (0);
	if ((power + 1) == 1)
		return (1);
	if ((power + 1) > 0)
	{
		power--;
		return (nb * ft_recursive_power(nb, power));
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_recursive_power(46341, 2));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(0, 1));
	printf("%d\n", ft_recursive_power(-3, 5));
	printf("%d\n", ft_recursive_power(-3, 2));
	return 0;
}
