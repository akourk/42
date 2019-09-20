/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 22:36:31 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/16 22:39:44 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char str1[] = "alex";
	char str2[] = "123";
	char str3[] = " akourk";
	printf("%s\n", ft_strcat(str1, str2));
	printf("%s\n", ft_strcat(str2, str3));
	printf("%s\n", ft_strcat(str3, str1));
	return (0);
}
