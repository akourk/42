/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 16:34:02 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/28 22:05:09 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

void	stores_line(char *r, int l, char *s);

char	*test_rush_error(void);

char	*test_rush_00_good(int l, int h, int i);

char	*test_rush_00(int l, int h);

char	*test_rush_01_good(int l, int h, int i);

char	*test_rush_01(int l, int h);

char	*test_rush_02_good(int l, int h, int i);

char	*test_rush_02(int l, int h);

char	*test_rush_03_good(int l, int h, int i);

char	*test_rush_03(int l, int h);

char	*test_rush_04_good(int l, int h, int i);

char	*test_rush_04(int l, int h);

int		findh(char *str);

int		findw(char *str);

int		ft_strlen(char *str);

void	ft_putstr(char *str);

void	ft_putchar(char c);

char	*ft_strjoin(char *s1, char *s2);

void	findsizes(char *str);

void	ft_putnbr(int nb);

void	generate(int w, int h, char *str);

void	generate2(int w, int h, char *str, int flag);

void	generate3(int w, int h, char *str, int flag);

int		ft_strcmp(char *s1, char *s2);

void	print_nbrs(int w, int h);

#endif
