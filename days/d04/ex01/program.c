/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:10:27 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/13 12:42:20 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		main(void)
{
	int i;

	i = ft_recursive_factorial(5);
	printf("%d\n", i);


	return (0);
}
