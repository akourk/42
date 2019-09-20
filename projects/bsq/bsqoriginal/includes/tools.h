/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:48:21 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/30 04:25:23 by scarrera         ###   ########.fr       */
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
int		**handle_file(char *filename);
int		**set_config(int **map, char *fline, int l_count, int length);
int		**read_file(int fd, int **map, int index, int *k);
void	display(int **map);
int		**resolve(int **map);
int		nb_size(int nb);
char	*ft_strcut(char *str, int limit);

#endif
