/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 19:47:54 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/28 22:00:28 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putnbr(int nb)
{
	int a;
	int b;

	a = nb;
	b = a % 10;
	if (nb < 0)
	{
		a = -nb;
		ft_putchar('-');
	}
	while (a / 10 != 0)
	{
		a /= 10;
		b = 10 * b + a % 10;
	}
	while (b / 10 != 0)
	{
		ft_putchar(b % 10 + '0');
		b /= 10;
	}
	ft_putchar(b + '0');
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
