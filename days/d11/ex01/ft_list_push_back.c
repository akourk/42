/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:43:55 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/23 16:57:33 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;

	if (*begin_list)
	{
		elem = *begin_list;
		while (elem->next)
			elem = elem->next;
		elem->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
