/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findsizes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 19:50:36 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/28 21:58:00 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	findsizes(char *str)
{
	int w;
	int h;

	w = findw(str);
	h = findh(str);
	generate(w, h, str);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		findh(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int		findw(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (i);
}

void	print_nbrs(int w, int h)
{
	ft_putstr("[");
	ft_putnbr(w);
	ft_putstr("] [");
	ft_putnbr(h);
	ft_putstr("]");
}
