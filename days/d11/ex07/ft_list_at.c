/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:35:29 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/24 20:47:36 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 0;
	while (begin_list)
	{
		if (i == nbr)
			return (begin_list);
		if (begin_list->next)
			begin_list = begin_list->next;
		else
			return (0);
		i++;
	}
	return (0);
}
