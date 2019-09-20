/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:01:58 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/16 09:46:06 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

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
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	printf("%s\n", ft_strupcase(str4));
	printf("%s\n", ft_strupcase(str5));
	printf("%s\n", ft_strupcase(str6));
	printf("%s\n", ft_strupcase(str7));
	return (0);
}
