/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danlee <danlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:00:22 by danlee            #+#    #+#             */
/*   Updated: 2019/07/21 23:36:02 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		is_sudoku(int argc, char **sudoku);
char	**get_sudoku(char **argv);
void	display_sudoku(char **sudoku);
int		solve_sudoku(char **sudoku, int row, int column);
int		valid_sudoku_nb(char **sudoku, int row, int col, char number);

#endif
