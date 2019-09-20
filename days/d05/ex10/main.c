/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:01:58 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/16 10:03:17 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str1[] = "alex Alex ALEX";
	char str2[] = "ALEX alex aleX";
	char str3[] = " aLe x 1 23xa nde";
	char str4[] = "AKouRk ";
	char str5[] = "shmork";
	char str6[] = "SHMARK";
	char str7[] = "";
	printf("%s\n", str1);
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	printf("%s\n", ft_strcapitalize(str4));
	printf("%s\n", ft_strcapitalize(str5));
	printf("%s\n", ft_strcapitalize(str6));
	printf("%s\n", ft_strcapitalize(str7));
	return (0);
}
