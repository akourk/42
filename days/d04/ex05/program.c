/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:26:09 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/13 18:08:59 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 1)
	{
		return (1);
	}
	else
	{
		while (i * i < nb && i < 46340)
		{
			i++;
			if (i * i == nb)
			{
				return (i);
			}
		}
	}
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(125));
	printf("%d\n", ft_sqrt(30));
	printf("%d\n", ft_sqrt(27));
	printf("%d\n", ft_sqrt(81));
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(144));
	printf("%d\n", ft_sqrt(100));
	printf("%d\n", ft_sqrt(55));
	printf("%d\n", ft_sqrt(49));
	return (0);
}
