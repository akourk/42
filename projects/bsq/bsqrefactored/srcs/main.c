/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:15:35 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/30 21:09:57 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tools.h"

int	**handle_input(char *filename)
{
	int fd;
	int k[4];
	int **map;

	k[0] = 0;
	k[1] = 0;
	k[3] = 0;
	map = NULL;
	if (filename)
		fd = open(filename, O_RDONLY);
	else
		fd = 0;
	if (fd == -1)
		return (map);
	map = read_file(fd, map, 1, k);
	close(fd);
	return (map);
}

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			display(resolve(handle_input(argv[i])));
			if (i + 1 < argc)
				ft_putchar('\n');
		}
	}
	else
		display(resolve(handle_input(0)));
	return (0);
}

int	**set_config(int **map, char *fline, int l_count, int length)
{
	map[0][0] = fline[length - 3];
	map[0][1] = fline[length - 2];
	map[0][2] = fline[length - 1];
	map[0][4] = l_count;
	if (map[0][0] == map[0][1] || map[0][0] ==
			map[0][2] || map[0][1] == map[0][2])
		return (NULL);
	return (map);
}
