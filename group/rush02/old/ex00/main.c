/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberresh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:15:12 by mberresh          #+#    #+#             */
/*   Updated: 2019/07/28 21:14:31 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER 420

int		findh(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int		findw(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (i);
}

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

void	findsizes(char *str)
{
	int w;
	int h;

	w = findw(str);
	h = findh(str);
}

int		main(void)
{
	int b;
	char buffer[BUFFER + 1];
	char *str;

	str = "";
	while ((b = read(STDIN_FILENO, buffer, BUFFER)))
	{
		buffer[b] = '\0';
		str = ft_strjoin(str, buffer);
	}
	findsizes(str);

	return (0);
}
