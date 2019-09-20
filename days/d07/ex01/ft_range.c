/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:13:38 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/18 23:09:38 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*arr;
	long	temp;

	temp = max;
	temp -= min;
	if (min >= max || temp > 2147483647)
		return (0);
	else
	{
		arr = (int*)(malloc(sizeof(int) * ((max + 1) - min)));
		i = 0;
		while (min < max)
			arr[i++] = min++;
		arr[i] = '\0';
	}
	return (arr);
}
