/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:01:58 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/16 09:02:40 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	printf("%d\n", ft_strncmp("alex", "alex", 3));
	printf("%d\n", ft_strncmp("alex", "alex1", 3));
	printf("%d\n", ft_strncmp("akourk", "bkourk", 5));
	printf("%d\n", ft_strncmp("shmork", "shmark", 4));
	printf("%d\n", ft_strncmp("shmark", "shmork", 5));
	printf("%d\n", ft_strncmp("", "", 5));
	return (0);
}
