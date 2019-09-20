/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:05:57 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/23 15:14:42 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *arr;
	int i;

	i = 0;
	arr = (int *)malloc(sizeof(int) * length);
	while (i < length)
		f(tab[i++]);
	return (arr);
}
