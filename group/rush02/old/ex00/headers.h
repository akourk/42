/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 16:34:02 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/28 20:01:06 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

void	stores_line(char a, char b, char c, int l, char *s);

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

char	*ft_strjoin(char *s1, char *s2);

void	findsizes(char *str);

#endif
