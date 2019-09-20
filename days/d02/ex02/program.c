/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:00:45 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/11 12:10:23 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_numbers(void)
{
	char c;
	
	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}

int main()
{
	ft_print_numbers();
	return (0);
}
