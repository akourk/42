/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 18:09:39 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/28 18:26:04 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*test_rush_00(int l, int h)
{
	if ((l > 0) && (h > 0))
		return (test_rush_00_good(l, h, 0));
	else
		return (test_rush_error());
}

char	*test_rush_01(int l, int h)
{
	if ((l > 0) && (h > 0))
		return (test_rush_01_good(l, h, 0));
	else
		return (test_rush_error());
}

char	*test_rush_02(int l, int h)
{
	if ((l > 0) && (h > 0))
		return (test_rush_02_good(l, h, 0));
	else
		return (test_rush_error());
}

char	*test_rush_03(int l, int h)
{
	if ((l > 0) && (h > 0))
		return (test_rush_03_good(l, h, 0));
	else
		return (test_rush_error());
}

char	*test_rush_04(int l, int h)
{
	if ((l > 0) && (h > 0))
		return (test_rush_04_good(l, h, 0));
	else
		return (test_rush_error());
}
