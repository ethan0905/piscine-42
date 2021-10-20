/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 07:50:25 by esafar            #+#    #+#             */
/*   Updated: 2021/02/24 11:09:38 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_taille_du_musee_du_louvre(int size, char **s, char *sep)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		while (s[i][j] != '\0')
			j++;
		count = count + j;
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			j++;
		count = count + j;
		j = 0;
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		count;
	char	*lajoconde;

	lajoconde = (char *)malloc(sizeof(char) *
			(ft_taille_du_musee_du_louvre(size, strs, sep) + 1));
	if (size == 0)
		return (lajoconde);
	count = 0;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			lajoconde[count + j] = strs[i][j];
		count = count + j;
		j = -1;
		while (sep[++j] != '\0' && i < size - 1)
			lajoconde[count + j] = sep[j];
		count = count + j;
	}
	lajoconde[count] = '\0';
	return (lajoconde);
}
