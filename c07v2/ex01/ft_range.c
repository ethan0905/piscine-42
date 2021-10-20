/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 07:49:42 by esafar            #+#    #+#             */
/*   Updated: 2021/02/25 12:17:29 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *dest;
	int i;

	if (min >= max)
		return (NULL);
	dest = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
