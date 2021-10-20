/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiallo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:03:07 by madiallo          #+#    #+#             */
/*   Updated: 2021/02/20 11:21:16 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_arg_valid(char *str);
int		check_space(char c);
void	populate_arg(int *col, int *raw);
int		place_ind(int tab[6][6], char *str);
void	print_table(int tab[6][6]);
void	makeboard(int tab[6][6]);
int		check_uniaue(int tab[6][6], int col, int raw, int val);
int		check_raw_left(int tab[6][6], int raw, int hautermax, int count);
int		check_raw_right(int tab[6][6], int raw, int hautermax, int count);
int		check_col_up(int tab[6][6], int col, int hautermax, int count);
int		check_col_down(int tab[6][6], int col, int hautermax, int count);
int		ft_solve(int tab[6][6], int col, int iter, int *res);

#endif
