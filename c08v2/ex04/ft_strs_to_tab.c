/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 08:20:58 by esafar            #+#    #+#             */
/*   Updated: 2021/05/23 14:21:49 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int						ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char					*ft_strdup(char *dest, char *src)
{
	int i;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*le_cri;
	int				i;

	le_cri = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (le_cri == NULL)
		return (le_cri);
	i = 0;
	while (i < ac)
	{
		le_cri[i].size = ft_strlen(av[i]);
		le_cri[i].str = av[i];
		le_cri[i].copy = (char *)malloc(sizeof(char) * (le_cri[i].size + 1));
		le_cri[i].copy = ft_strdup(le_cri[i].copy, le_cri[i].str);
		i++;
	}
	le_cri[i].size = 0;
	le_cri[i].str = 0;
	le_cri[i].copy = 0;
	return (le_cri);
}
