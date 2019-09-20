/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:23:37 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/21 13:43:24 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		countstars(char *str)
{
	int i;
	int stars;

	i = 0;
	stars = 0;
	// make sure you take care of consecutive stars
	while (str[i])
		if (str[i++] == '*')
			stars++;
	if (str[i] == '*')
		stars--;
	return (stars);
}

int		ft_strnstr(char *text, char *pattern, int index)
{
	int i;

	i = 0;
	while (text[i] != '\0')
	{
		while (text[i + index] == pattern[index])
		{
			printf("%d%s%d%s%c\n", i, " < i, index > ", index, ", text[i + index] > ", text[i + index]);
			if (pattern[index] == '\0')
				return (i + index);
			index++;
		}
		i++;
	}
	return (-1);
}

void	ft_printchunks(char **chunks, int chunkcount)
{
	int i;
	int j;
	i = 0;
	j = 0;

	//printf("%s\n", "checkpoint print");
	while (i <= chunkcount)
	{
		//printf("%d\n", i);
		while (chunks[i][j])
		{
			ft_putchar(chunks[i][j++]);
			//printf("%d%s%d%s%c\n", i, "< i, j > ", j - 1, ", chunks[i][j] > ", chunks[i][j - 1]);
		}
		ft_putchar('\n');
		i++;
		j = 0;
		//printf("\n%d%s%d%s%c\n", i, "< i, j > ", j, ", chunks[i][j] > ", chunks[i][j]);
	}
	printf("%s\n", "completed printchunks");
}



int		match(char *s1, char *s2)
{
	int i;
	int j;
	int stars;
	int subchunksize;
	char **chunks;

	i = 0;
	j = 0;
	subchunksize = 0;
	stars = countstars(s2);
	// this is temporary. come back and cover for
	// multiple spaces or stars at the start and end
	chunks = (char**)malloc(sizeof(char*) * (stars + 2));
	//chunks = (char**)malloc(sizeof(char*) * (stars + 2));
	while (j <= stars)
	{
		while (s2[i] != '*' && s2[i] != '\0')
		{
			// here we can handle multiple stars again
			i++;
			subchunksize++;
		}
		chunks[j] = (char*)malloc(sizeof(char) * subchunksize + 1);
		//chunks[j] = (char*)malloc(sizeof(char*) * (subchunksize + 1));
		subchunksize = 0;
		// does this iterate past the star?
		i++;
		j++;
		
	}
	j = 0;
	i = 0;
	subchunksize = 0;
	while (j <= stars)
	{
		while (s2[i] != '*' && s2[i] != '\0')
		{
			//ft_putchar(s2[i]);
			chunks[j][subchunksize++] = s2[i];
			//printf("%d%s%d%s%c%s%c\n", j, " < j, subchunksize > ", subchunksize, " <> ", chunks[j][subchunksize - 1], " < chunks[j][subchunksize], s2[i] > ", s2[i]);
			i++;
		}
		subchunksize = 0;
		//printf("%s\n", "end of chunkloop");
		// does this iterate past the star?
		i++;
		j++;
	}
	ft_printchunks(chunks, stars);
	ft_putchar('\n');

	j = 0;
	i = 0;
	while (j <= stars)
	{
		if (ft_strnstr(s1, chunks[j], i) < 0)
			return (0);
		else
			i = ft_strnstr(s1, chunks[j], i);
		j++;
	}

	return (1);
}

int		main(void)
{
	char str1[] = "this is a string.";
	char str2[] = "this is a *tring.";

	char str3[] = "this*tring.";
	char str4[] = "this is a *tring.";

	char str5[] = "this is a string.";
	char str6[] = "this is a st*ng.";

	char str7[] = "this a *tring.";
	char str8[] = "this is a *tring.";

	char str9[] = "this is a *tring.";
	char str10[] = "this is a *tring.";
	if (match(str1, str2))
		write(1, "match", 6);
	else
		write(1, "nomatch", 8);

	write(1, "\n", 1);

	if (match(str3, str4))
		write(1, "match", 6);
	else
		write(1, "nomatch", 8);

	write(1, "\n", 1);
	if (match(str5, str6))
		write(1, "match", 6);
	else
		write(1, "nomatch", 8);

	write(1, "\n", 1);
	if (match(str7, str8))
		write(1, "match", 6);
	else
		write(1, "nomatch", 8);

	write(1, "\n", 1);
	if (match(str9, str10))
		write(1, "match", 6);
	else
		write(1, "nomatch", 8);

	return (0);
}
