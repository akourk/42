/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:05:10 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/14 23:59:24 by akourkou         ###   ########.fr       */
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

int		ft_finalsize(int size)
{
	int tiers;
	int tierincrement;
	int numofstars;
	int rowsintiers;
	int i;

	i = 1;
	tiers = 1;
	rowsintiers = 3;
	numofstars = 1;
	tierincrement = 0;
	while (tiers <= size)
	{
		if (tiers < 3 && tiers > 1)
		{
			tierincrement = 4;
		}
		else if (tiers == 3)
		{
			tierincrement = 6;
		}
		else if (tiers >= 4 && tiers % 2 == 1)
		{
			tierincrement = tierincrement + 2;
		}
		numofstars = numofstars + tierincrement;
		while (i < rowsintiers)
		{
			numofstars = numofstars + 2;
			i++;
		}
		i = 1;
		rowsintiers++;
		tiers++;
	}
	printf("%d\n", numofstars);
	return numofstars;
}

void	sastantua(int size)
{
	int height;
	int width;
	int spaces;
	int i;
	int finalwidth;
	int j;
	int numofstars;
	int l;
	int tiers;
	int rowsintiers;
	int tierincrement;


	tierincrement = 0;
	i = 1;
	tiers = 1;
	rowsintiers = 3;
	numofstars = 1;
	width = ft_finalsize(size);
	while (tiers <= size)
	{
		if (tiers < 3 && tiers > 1)
		{
			tierincrement = 4;
		}
		else if (tiers == 3)
		{
			tierincrement = 6;
		}
		else if (tiers >= 4 && tiers % 2 == 1)
		{
			tierincrement = tierincrement + 2;
		}
		numofstars = numofstars + tierincrement;
		while (i <= rowsintiers)
		{
			ft_printspaces((width - (numofstars + 2)) / 2);
			ft_putchar('/');
			ft_printcenter(numofstars);
			ft_putchar('\\');
			ft_putchar('\n');
			numofstars = numofstars + 2;
			i++;
		}
		i = 1;
		rowsintiers++;
		tiers++;
	}




	// if section == 3 increment 
	// else if section >= 4 and section % 2 == 1 increment
	j = 1;
	tiers = 1;
	rowsintiers = 3;
	tierincrement = 0;
	numofstars = 1;	

	//while (tiers <= size)
	//{
	//	if (tiers > 1)
	//	{
	//		tierincrement = 6;
	//	}
	//	if (tiers == 3)
	//	{
	//		tierincrement = 8;
	//	}
	//	else if (tiers >= 4 && tiers % 2 == 1)
	//	{
	//		tierincrement = tierincrement + 2;
	//	}
	//	numofstars = numofstars + tierincrement;
	//	while (j < rowsintiers)
	//	{
	//		numofstars = numofstars + 2;
	//		j++;
	//	}
	//	j = 1;
	//	rowsintiers++;
	//	tiers++;
	//}
	//printf("%d\n", numofstars);
	width = ft_finalsize(size);
}

int		main(void)
{
	sastantua(5);
	sastantua(4);
	sastantua(3);
	sastantua(2);
	sastantua(1);
	return (0);
}
