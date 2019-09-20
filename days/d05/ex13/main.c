/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:01:58 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/16 11:04:22 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char str1[] = "alex Alex ALEX";
	char str2[] = "123456";
	char str3[] = " aLe x 1 23xa nde";
	char str4[] = "akourk ";
	char str5[] = "AKOURK ";
	char str6[] = "akourk";
	char str7[] = "";
	//printf("%s\n", str1);
	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	printf("%d\n", ft_str_is_lowercase(str4));
	printf("%d\n", ft_str_is_lowercase(str5));
	printf("%d\n", ft_str_is_lowercase(str6));
	printf("%d\n", ft_str_is_lowercase(str7));
	return (0);
}
