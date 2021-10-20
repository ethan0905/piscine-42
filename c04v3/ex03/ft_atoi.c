/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:02:27 by esafar            #+#    #+#             */
/*   Updated: 2021/05/21 11:04:13 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isblank(char c)
{
	if (c == ' ' || (c == '\f' || c == '\n'
				|| c == '\t' || c == '\v' || c == '\r'))
		return (1);
	return (0);
}

int	ft_is_negative(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int res;
	int sign;
	int i;

	i = 0;
	while (ft_isblank(str[i]) == 1)
		i++;
	sign = 1;
	while (ft_is_negative(str[i]) == 1)
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	res = 0;
	while (ft_is_number(str[i]) == 1)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}
