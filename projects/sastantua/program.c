/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:05:10 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/14 22:17:26 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printspaces(int i)
{
	while (i > 0)
	{
		ft_putchar(' ');
		i--;
	}
}

void	ft_printcenter(int i)
{
	while (i > 0)
	{
		ft_putchar('*');
		i--;
	}
}

void	ft_printdoor(int i)
{
	while (i > 0)
	{
		ft_putchar('|');
		i--;
	}
}

void	sastantua(int size)
{
	int height;
	int width;
	int spaces;
	int i;
	int finalwidth;

	i = 1;
	height = ((size * (size + 1)) / 2) + (2 * size);
	finalwidth = (((3 * height) - 4) - ((size - 1) / 2));
	while (i <= height)
	{
		width = (((3 * i) - 4) - ((size - 1) / 2));
		spaces = ((finalwidth - width) / 2);
		ft_printspaces(spaces);
		ft_putchar('/');
		ft_printcenter(width);
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

int		main(void)
{
	sastantua(4);
	ft_putchar('\n');
	sastantua(2);
	ft_putchar('\n');
	sastantua(1);
	return (0);
}
