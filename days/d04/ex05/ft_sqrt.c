/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:58:53 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/13 18:00:33 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 1)
	{
		return (1);
	}
	else
	{
		while (i * i < nb && i < 46340)
		{
			i++;
			if (i * i == nb)
			{
				return (i);
			}
		}
	}
	return (0);
}
