/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:26:40 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/25 20:53:40 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void*))
{
	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf((*root)->item, item) <= 0)
	{
		if (!(*root)->right)
		{
			(*root)->right = btree_create_node(item);
			return ;
		}
		btree_insert_data(&((*root)->right), item, cmpf);
	}
	else
	{
		if (!(*root)->item)
		{
			(*root)->left = btree_create_node(item);
			return ;
		}
		btree_insert_data(&((*root)->left), item, cmpf);
	}
}
