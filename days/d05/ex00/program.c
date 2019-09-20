/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:44:14 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/15 14:51:40 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}

int		main(void)
{
	char c[] = "akourk";

	//c[0] = 'a';
	//c[1] = 'k';
	//c[2] = 'o';
	//c[3] = 'u';
	//c[4] = 'r';
	//c[5] = 'k';
	ft_putstr(c);
	return (0);
}
