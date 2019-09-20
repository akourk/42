/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberresh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:15:12 by mberresh          #+#    #+#             */
/*   Updated: 2019/07/28 19:51:48 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER 420

int		main(void)
{
	int b;
	char buffer[BUFFER + 1];
	char *str;

	str = "";
	while ((b = read(STDIN_FILENO, buffer, BUFFER)))
	{
		buffer[b] = '\0';
		str = ft_strjoin(str, buffer);
	}
	findsizes(str);

	return (0);
}
