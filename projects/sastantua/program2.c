/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:05:10 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/14 17:14:26 by akourkou         ###   ########.fr       */
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
	int i;
	int blocksize;

	i = 0;
	blocksize = (2 + size);
	while (i < size * 3)
	{
		ft_printspaces((size * 3) - (i + 1));
		ft_putchar('/');
		ft_printcenter((i * 2) / 2);
		ft_printdoor((size * 3) / 2);
		ft_printcenter((i * 2) / 2);
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

int		main(void)
{
	sastantua(2);
	ft_putchar('\n');
	sastantua(1);
	return (0);
}
