/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:01:58 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/16 19:40:29 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	printf("%d\n", ft_strcmp("alex", "alex"));
	printf("%d\n", ft_strcmp("alex", "alex1"));
	printf("%d\n", ft_strcmp("akourk", "bkourk"));
	printf("%d\n", ft_strcmp("shmork", "shmark"));
	printf("%d\n", ft_strcmp("shmark", "shmork"));
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", ft_strcmp("A", ""));
	printf("%d\n", ft_strcmp("", "A"));
	return (0);
}
