/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 13:25:02 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/25 16:44:26 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *btree;

	btree = malloc(sizeof(t_btree));
	if (btree)
	{
		btree->item = item;
		btree->left = 0;
		btree->right = 0;
	}
	return (btree);
}
