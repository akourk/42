/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:10:41 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/24 20:24:29 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *elem;
	t_list *temp;

	elem = *begin_list;
	while (elem && elem->next)
	{
		temp = elem;
		free(elem);
		elem = temp->next;
	}
	if (elem)
		free(elem);
	*begin_list = 0;
}
