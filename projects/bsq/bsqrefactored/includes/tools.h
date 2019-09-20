/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:48:21 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/30 21:10:24 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUFFER_SIZE 28676

int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		**handle_input(char *filename);
int		**set_config(int **map, char *fline, int l_count, int length);
int		**read_file(int fd, int **map, int index, int *k);
void	display(int **map);
int		**resolve(int **map);
int		ft_numlen(int num);
char	*ft_strcut(char *str, int limit);

#endif
