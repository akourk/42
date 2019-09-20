/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:24:25 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/21 16:34:17 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (match(s1, s2 + 1));
		else
			return (match(s1 + 1, s2) || match(s1, s2 + 1));
	}
	else if (*s2 == *s1)
		return (match(s1 + 1, s2 + 1));
	else
		return (0);
}

int		main(void)
{
	char str1[] = "this is a string.";
	char str2[] = "th*s a *ring.";

	char str3[] = "this is a string.";
	char str4[] = "*string";

	char str5[] = "this is a string.";
	char str6[] = "this ***ring.";

	char str7[] = "this is a string.";
	char str8[] = "t*is a*ng.";

	if (match(str1, str2))
		printf("match");
	else
		printf("nomatch");

	printf("\n");

	if (match(str3, str4))
		printf("match2");
	else
		printf("nomatch2");

	printf("\n");

	if (match(str5, str6))
		printf("match3");
	else
		printf("nomatch3");

	printf("\n");

	if (match(str7, str8))
		printf("match4");
	else
		printf("nomatch4");
	
	return (0);
}
