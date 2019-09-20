/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:15:35 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/30 02:18:56 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tools.h"

int	main(int argc, char *argv[])
{
	int count;

	count = 0;
	if (argc > 1)
	{
		while (++count < argc)
		{
			display(resolve(handle_file(argv[count])));
			if (count + 1 < argc)
				ft_putchar('\n');
		}
	}
	else
		display(resolve(handle_file(0)));
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

int	nb_size(int nb)
{
	int count;

	count = 1;
	while (nb >= 10)
	{
		nb /= 10;
		++count;
	}
	return (count);
}
