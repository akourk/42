/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:09:39 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/12 11:28:50 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{	
	char c;

	c = 'a';
	while(c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

int	main()
{
	ft_print_alphabet();
	return (0);
}

