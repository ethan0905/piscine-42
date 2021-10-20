/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 08:24:33 by esafar            #+#    #+#             */
/*   Updated: 2021/05/20 12:25:10 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int b;

	b = 0;
	while (str[b] != '\0')
	{
		b++;
	}
	return (b);
}

int	main()
{
	char *a;

	a = malloc(20);
	a = strcpy(a, "hello!");
	printf("%d\n", ft_strlen(a));
	free(a);
}
