/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:25:36 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/11 19:42:25 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '7')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				ft_putchar(',');
				ft_putchar(' ');
				z++;
			}
			y++;
		}
		x++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
