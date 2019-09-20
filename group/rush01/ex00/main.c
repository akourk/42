/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 14:47:16 by danlee            #+#    #+#             */
/*   Updated: 2019/07/21 22:45:13 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdio.h>

char	**get_sudoku(char **argv)
{
	int		i;
	int		j;
	char	**sudoku;

	i = 1;
	sudoku = (char **)malloc(sizeof(char *) * 9);
	while (i < 10)
	{
		sudoku[i - 1] = (char *)malloc(sizeof(char) * 9);
		j = 0;
		while (j < 10)
		{
			sudoku[i - 1][j] = argv[i][j];
			j++;
		}
		sudoku[i - 1][j] = '\0';
		i++;
	}
	return (sudoku);
}

int		main(int argc, char **argv)
{
	char	**sudoku;

	if (is_sudoku(argc, argv))
	{
		sudoku = get_sudoku(argv);
		solve_sudoku(sudoku, 0, 0);
	}
	else
	{
		ft_putstr("Error\n");
	}
	return (0);
}
