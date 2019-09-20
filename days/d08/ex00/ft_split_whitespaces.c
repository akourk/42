/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 12:34:41 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/19 14:49:34 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ln_w(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

int		ft_count_words(char *str)
{
	int	i;
	int	sym;
	int	count;

	i = 0;
	sym = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
		{
			i++;
			sym = 1;
		}
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
		{
			if (sym == 1)
				count += 1;
			sym = 0;
			i++;
		}
	}
	return count;
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	res = malloc(sizeof(char*) * (ft_count_words(str) + 1));
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			res[j] = malloc(sizeof(char) * ft_ln_w(str, i) + 1);
			while (
		}
	}
}

int		main(void)
{
	char *str1 = "hello my name is alex";
	char *str2 = " hello my name is alex ";
	char **str3 = ft_split_whitespaces(str1);
	char **str4 = ft_split_whitespaces(str2);

	int i = 0;

	while (str[
}
