/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 17:47:55 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/28 20:31:27 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers.h"

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

char	*test_rush_01_good(int l, int h, int i)
{
	char *s;

	s = 0;
	if ((l > 0) && (h > 0))
	{
		s = (char *)(malloc(sizeof(*s) * ((l + 1) * h + 1)));
		if (h == 1)
			stores_line("/*\\", l, s + i);
		else if (h > 1)
		{
			stores_line("/*\\", l, s + i);
			while (h - 2 > 0)
			{
				i += l + 1;
				stores_line("* *", l, s + i);
				h--;
			}
			i += l + 1;
			stores_line("\\*/", l, s + i);
		}
		i += l + 1;
		s[i] = '\0';
	}
	return (s);
}

char	*test_rush_02_good(int l, int h, int i)
{
	char *s;

	s = 0;
	if ((l > 0) && (h > 0))
	{
		s = (char *)(malloc(sizeof(*s) * ((l + 1) * h + 1)));
		if (h == 1)
			stores_line("ABA", l, s + i);
		else if (h > 1)
		{
			stores_line("ABA", l, s + i);
			while (h - 2 > 0)
			{
				i += l + 1;
				stores_line("B B", l, s + i);
				h--;
			}
			i += l + 1;
			stores_line("CBC", l, s + i);
		}
		i += l + 1;
		s[i] = '\0';
	}
	return (s);
}

char	*test_rush_03_good(int l, int h, int i)
{
	char *s;

	s = 0;
	if ((l > 0) && (h > 0))
	{
		s = (char *)(malloc(sizeof(*s) * ((l + 1) * h + 1)));
		if (h == 1)
			stores_line("ABC", l, s + i);
		else if (h > 1)
		{
			stores_line("ABC", l, s + i);
			while (h - 2 > 0)
			{
				i += l + 1;
				stores_line("B B", l, s + i);
				h--;
			}
			i += l + 1;
			stores_line("ABC", l, s + i);
		}
		i += l + 1;
		s[i] = '\0';
	}
	return (s);
}

char	*test_rush_04_good(int l, int h, int i)
{
	char *s;

	s = 0;
	if ((l > 0) && (h > 0))
	{
		s = (char *)(malloc(sizeof(*s) * ((l + 1) * h + 1)));
		if (h == 1)
			stores_line("ABC", l, s + i);
		else if (h > 1)
		{
			stores_line("ABC", l, s + i);
			while (h - 2 > 0)
			{
				i += l + 1;
				stores_line("B B", l, s + i);
				h--;
			}
			i += l + 1;
			stores_line("CBA", l, s + i);
		}
		i += l + 1;
		s[i] = '\0';
	}
	return (s);
}
