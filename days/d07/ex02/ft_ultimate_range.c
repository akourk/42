/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 19:41:09 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/18 22:17:42 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*arr;
	long	temp;

	temp = max;
	temp -= min;
	if (min >= max || temp > 2147483647)
		return (0);
	arr = (int*)malloc(sizeof(*arr) * (max - min));
	i = 0;
	while (min < max)
		arr[i++] = min++;
	*range = arr;
	return (i);
}
