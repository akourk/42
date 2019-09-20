/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:39:47 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/13 17:13:43 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	// 0, 1, 1, 2, 3, 5, 8,
	if (index < 0)
	{
		return (-1);
	}	
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

int main(void)
{
	int i;

	i = ft_fibonacci(5);
	printf("%d\n", i);

	i = ft_fibonacci(6);
	printf("%d\n", i);

	i = ft_fibonacci(7);
	printf("%d\n", i);
	return (0);
}
