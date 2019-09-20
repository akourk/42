/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 13:02:49 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/28 17:34:37 by lkrief           ###   ########.fr       */
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

char	*test_rush_00_good(int l, int h, int i)
{
	char *s;

	s = 0;
	if ((l > 0) && (h > 0))
	{
		s = (char *)(malloc(sizeof(*s) * ((l + 1) * h + 1)));
		if (h == 1)
			stores_line("o-o", l, s + i);
		else if (h > 1)
		{
			stores_line("o-o", l, s + i);
			while (h - 2 > 0)
			{
				i += l + 1;
				stores_line("| |", l, s + i);
				h--;
			}
			i += l + 1;
			stores_line("o-o", l, s + i);
		}
		i += l + 1;
		s[i] = '\0';
	}
	return (s);
}

char	*test_rush_00_error(void)
{
	char *s;

	s = (char *)malloc(sizeof(*s) * 2);
	s[0] = '\n';
	s[1] = '\0';
	return (s);
}

char	*test_rush_00(int l, int h)
{
	if ((l > 0) && (h > 0))
		return (test_rush_00_good(l, h, 0));
	else
		return (test_rush_00_error());
}
