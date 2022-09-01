/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btee_insert_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:36:18 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/25 12:59:11 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree new;

	if (root = NULL)
		new = btree_create_node(item);
	else
	{
		while (root)
		{
			if ((*cmpf)((*root).item, item) >= item)
				btree_insert_data((*root).right, item, (*cmpf));
			else if ((*cmpf)((*root).item, item) < item)
				btree_insert_data((*root).left, item, (*cmpf));
		}
	}
}
