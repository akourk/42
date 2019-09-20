/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 19:53:23 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/11 15:31:15 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_reverse_alphabet(void)
{
	char c;
	c = 'z';

	while(c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return (0);
}
