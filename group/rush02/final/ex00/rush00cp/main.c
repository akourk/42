/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 12:55:29 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/28 20:53:56 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);

int		main(int argc, char **argv)
{
	if (argc == 3)
		rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
