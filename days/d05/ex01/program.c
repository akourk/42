/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:44:14 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/15 15:50:45 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int i;
	char c[10];

	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	i = 0;
	while (nb / 10 > 0)
	{
		c[i] = ((nb % 10) + '0');
		nb /= 10;
		i++;
	}
	c[i] = (nb + '0');
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}

int		main(void)
{
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(1234567890);
	return (0);
}
