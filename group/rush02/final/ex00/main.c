/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberresh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:15:12 by mberresh          #+#    #+#             */
/*   Updated: 2019/07/28 22:10:27 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

#define BUFFER 420

void	generate(int w, int h, char *str)
{
	int flag;

	flag = 0;
	if (!ft_strcmp(str, test_rush_00(w, h)))
	{
		ft_putstr("[colle-00] ");
		print_nbrs(w, h);
		flag = 1;
	}
	if (!ft_strcmp(str, test_rush_01(w, h)))
	{
		if (flag)
			ft_putstr(" || ");
		ft_putstr("[colle-01] ");
		print_nbrs(w, h);
		flag = 1;
	}
	generate2(w, h, str, flag);
}

void	generate2(int w, int h, char *str, int flag)
{
	if (!ft_strcmp(str, test_rush_02(w, h)))
	{
		if (flag)
			ft_putstr(" || ");
		ft_putstr("[colle-02] ");
		print_nbrs(w, h);
		flag = 1;
	}
	if (!ft_strcmp(str, test_rush_03(w, h)))
	{
		if (flag)
			ft_putstr(" || ");
		ft_putstr("[colle-03] ");
		print_nbrs(w, h);
		flag = 1;
	}
	generate3(w, h, str, flag);
}

void	generate3(int w, int h, char *str, int flag)
{
	if (!ft_strcmp(str, test_rush_04(w, h)))
	{
		if (flag)
			ft_putstr(" || ");
		ft_putstr("[colle-04] ");
		print_nbrs(w, h);
		flag = 1;
	}
	if (!flag)
		ft_putstr("aucune");
	ft_putchar('\n');
}

int		main(void)
{
	int		b;
	char	buffer[BUFFER + 1];
	char	*str;

	str = "";
	while ((b = read(STDIN_FILENO, buffer, BUFFER)))
	{
		buffer[b] = '\0';
		str = ft_strjoin(str, buffer);
	}
	findsizes(str);
	return (0);
}
