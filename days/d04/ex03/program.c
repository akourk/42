/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:59:25 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/13 16:51:29 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		if (power == 1)
		{
			return (nb);
		}
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	int i;

	i = ft_recursive_power(5, 3);
	printf("%d\n", i);
	i = ft_recursive_power(-5, 3);
	printf("%d\n", i);
	i = ft_recursive_power(5, 1);
	printf("%d\n", i);
	i = ft_recursive_power(5, 0);
	printf("%d\n", i);
	i = ft_recursive_power(5, -1);
	printf("%d\n", i);
	i = ft_recursive_power(-5, 1);
	printf("%d\n", i);
	i = ft_recursive_power(-5, 0);
	printf("%d\n", i);
	i = ft_recursive_power(10, 1);
	printf("%d\n", i);
	i = ft_recursive_power(10, 2);
	printf("%d\n", i);
	return (0);
}
