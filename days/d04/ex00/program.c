/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 10:44:22 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/13 11:06:32 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int sum;

	if (nb > 0)
	{
		sum = nb;
		nb--;
		while (nb > 1)
		{
			sum = sum * nb;
			nb--;
		}
	}
	else
	{
		return (0);
	}
	return (sum);
}

int		main(void)
{
	int i;

	i = ft_iterative_factorial(5);
	printf("%d\n", i);
	i = ft_iterative_factorial(1);
	printf("%d\n", i);
	i = ft_iterative_factorial(0);
	printf("%d\n", i);
	i = ft_iterative_factorial(-1);
	printf("%d\n", i);
	i = ft_iterative_factorial(-123125123);
	printf("%d\n", i);
	i = ft_iterative_factorial(10);
	printf("%d\n", i);
	return (0);
}
