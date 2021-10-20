/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 08:39:02 by esafar            #+#    #+#             */
/*   Updated: 2021/02/18 09:10:12 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int autre_var;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	autre_var = 1;
	while (nb > 0)
	{
		autre_var = autre_var * nb;
		nb--;
	}
	return (autre_var);
}
