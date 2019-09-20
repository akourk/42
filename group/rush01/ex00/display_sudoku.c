/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_sudoku.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 17:12:37 by danlee            #+#    #+#             */
/*   Updated: 2019/07/21 22:44:21 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	display_sudoku(char **sudoku)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			ft_putchar(sudoku[i][j]);
			if (j < 8)
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
