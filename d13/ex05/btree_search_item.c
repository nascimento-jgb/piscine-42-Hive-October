/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:27:15 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/25 17:34:54 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
int (*cmpf)(void *, void *))
{
	void	*res;

	res = NULL;
	if ((*root).left)
		res = btree_search_item((*root).left, data_ref, (*cmpf));
	if (!res && (*cmpf)((*root).item, data_ref) == 0)
		return ((*root).item);
	if (!res && (*root).right)
		btree_search_item((*root).right, data_ref, (*cmpf));
	return (res);
}
