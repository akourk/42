/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:47:39 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/13 22:26:19 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i < (nb / 2) + 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb < 2)
		return (2);
	i = nb;
	while (i > 0)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(10));
	printf("%d\n", ft_find_next_prime(20));
	printf("%d\n", ft_find_next_prime(30));
	printf("%d\n", ft_find_next_prime(100));
	return (0);
}
