/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:24:23 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/13 23:07:28 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int product;

	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	product = nb;
	while (power > 1)
	{
		product = product * nb;
		power--;
	}
	return (product);
}
int		main(void)
{
	int i;

	i = ft_iterative_power(5, 3);
	printf("%d\n", i);
	i = ft_iterative_power(-5, 3);
	printf("%d\n", i);
	i = ft_iterative_power(5, 1);
	printf("%d\n", i);
	i = ft_iterative_power(5, 0);
	printf("%d\n", i);
	i = ft_iterative_power(5, -1);
	printf("%d\n", i);
	i = ft_iterative_power(-5, 1);
	printf("%d\n", i);
	i = ft_iterative_power(-5, 0);
	printf("%d\n", i);
	i = ft_iterative_power(10, 1);
	printf("%d\n", i);

}
