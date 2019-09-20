/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:01:58 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/16 09:46:43 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str1[] = "alex";
	char str2[] = "ALEX";
	char str3[] = "aLex123xande";
	char str4[] = "AKouRk";
	char str5[] = "shmork";
	char str6[] = "SHMARK";
	char str7[] = "";
	printf("%s\n", str1);
	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	printf("%s\n", ft_strlowcase(str4));
	printf("%s\n", ft_strlowcase(str5));
	printf("%s\n", ft_strlowcase(str6));
	printf("%s\n", ft_strlowcase(str7));
	return (0);
}
