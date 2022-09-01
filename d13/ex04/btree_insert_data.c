/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:36:18 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/25 17:48:19 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
int (*cmpf)(void *, void *))
{
	if (root == NULL)
		*root = btree_create_node(item);
	else if ((*cmpf)((*root)->item, item) >= 0)
		btree_insert_data(&(*root)->right, item, (*cmpf));
	else
		btree_insert_data(&(*root)->left, item, (*cmpf));
}
