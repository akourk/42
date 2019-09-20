/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 22:28:03 by slee              #+#    #+#             */
/*   Updated: 2019/07/21 23:51:23 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		solve_sudoku(char **sudoku, int row, int column)
{
	int		number;

	number = '1';
	if (column == 9)
	{
		column = 0;
		row++;
	}
	if (row == 9)
	{
		display_sudoku(sudoku);
		return (1);
	}
	if (sudoku[row][column] >= '1' && sudoku[row][column] <= '9')
		return (solve_sudoku(sudoku, row, column + 1));
	while (number++ <= '9')
	{
		if (valid_sudoku_nb(sudoku, row, column, number - 1))
		{
			sudoku[row][column] = number - 1;
			if (solve_sudoku(sudoku, row, column + 1))
				return (1);
		}
	}
	sudoku[row][column] = '.';
	return (0);
}

int		checkcolrow(char **sudoku, int col, int row, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[i][col] == num)
			return (1);
		if (sudoku[row][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int		valid_sudoku_nb(char **sudoku, int row, int col, char number)
{
	int	i;
	int	ver_sub_box;
	int	hor_sub_box;
	int	tcr;
	int	tcc;

	i = 0;
	ver_sub_box = (row / 3);
	hor_sub_box = (col / 3);
	tcr = (3 * ver_sub_box);
	tcc = (3 * hor_sub_box);
	if (checkcolrow(sudoku, col, row, number))
		return (0);
	if (sudoku[((row + 2) % 3) + tcr][((col + 2) % 3) + tcc] == number)
		return (0);
	if (sudoku[((row + 2) % 3) + tcr][((col + 4) % 3) + tcc] == number)
		return (0);
	if (sudoku[((row + 4) % 3) + tcr][((col + 2) % 3) + tcc] == number)
		return (0);
	if (sudoku[((row + 4) % 3) + tcr][((col + 4) % 3) + tcc] == number)
		return (0);
	return (1);
}

int		is_sudoku(int argc, char **sudoku)
{
	int	i;

	i = 1;
	if (argc != 10)
	{
		return (0);
	}
	while (i < 10)
	{
		if (ft_strlen(sudoku[i]) < 9)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
