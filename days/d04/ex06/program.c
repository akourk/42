/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:12:18 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/13 21:35:59 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int prime;
	int i;

	prime = 1;
	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i < (nb / 2) + 1 && prime == 1)
	{
		if (nb % i == 0)
			prime = 0;
		i++;
	}
	return (prime);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(6));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(9));
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(12));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(14));
	printf("%d\n", ft_is_prime(15));
	return (0);
}
