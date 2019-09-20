/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 10:41:38 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/24 10:54:59 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *one;
	t_list *two;
	t_list *three;

	one = *begin_list;
	if ((*cmp)(*begin_list-
	while (*begin_list)
	{
		if ((*cmp)(*begin_list->data, data_ref) == 0)
		{
			if (*begin_list->next)
				*begin_list = begin_list->next;
		}
	}
}
