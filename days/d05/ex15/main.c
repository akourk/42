/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:01:58 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/16 14:00:40 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char str1[] = "alex Alex ALEX";
	char str2[] = "123456";
	char str3[] = " aLe x 1 23xa nde";
	char str4[] = "akourk ";
	char str5[] = "AKOURK ";
	char str6[] = "AKOURK";
	char str7[] = "";
	//printf("%s\n", str1);
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));
	printf("%d\n", ft_str_is_printable(str5));
	printf("%d\n", ft_str_is_printable(str6));
	printf("%d\n", ft_str_is_printable(str7));
	return (0);
}
