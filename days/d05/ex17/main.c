/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 22:36:31 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/16 22:50:47 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char str1[] = "alex";
	char str2[] = "123";
	char str3[] = " akourk";
	printf("%s\n", ft_strncat(str1, str2, 2));
	printf("%s\n", ft_strncat(str2, str3, 3));
	printf("%s\n", ft_strncat(str3, str1, 2));
	return (0);
}
