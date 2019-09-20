/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 18:12:34 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/28 21:38:53 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	stores_line(char *r, int l, char *s)
{
	int i;

	i = 0;
	if (l == 1)
	{
		s[i++] = r[0];
		s[i++] = '\n';
	}
	else if (l > 1)
	{
		s[i++] = r[0];
		while (i < l - 1)
		{
			s[i++] = r[1];
		}
		s[i++] = r[2];
		s[i++] = '\n';
	}
}

char	*test_rush_error(void)
{
	char *s;

	s = (char *)malloc(sizeof(*s) * 2);
	s[0] = '\n';
	s[1] = '\0';
	return (s);
}
