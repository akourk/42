/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:13:38 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/18 20:10:36 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *arr;

	if (min >= max)
	{
		arr = (void *)0;
		return (arr);
	}
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

int		main(void)
{
	int min = 11;
	int max = 10;
	int *arr = ft_range(min, max);
	if (arr == NULL)
		printf("%s", "print");
	int i = 0;
	while (arr[i])
	{
		printf("%d\n", arr[i++]);
		min++;
	}
}
