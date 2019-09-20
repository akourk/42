/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:01:58 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/16 10:37:05 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char str1[] = "alex Alex ALEX";
	char str2[] = "ALEX alex aleX";
	char str3[] = " aLe x 1 23xa nde";
	char str4[] = "AKo1uRk ";
	char str5[] = "shmork";
	char str6[] = "SHM1ARK";
	char str7[] = "";
	//printf("%s\n", str1);
	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
	printf("%d\n", ft_str_is_alpha(str4));
	printf("%d\n", ft_str_is_alpha(str5));
	printf("%d\n", ft_str_is_alpha(str6));
	printf("%d\n", ft_str_is_alpha(str7));
	return (0);
}
