/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findsizes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 19:50:36 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/28 19:50:58 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	findsizes(char *str)
{
	int w;
	int h;

	w = findw(str);
	h = findh(str);
}

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
