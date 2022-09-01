/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:27:31 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/25 17:48:21 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		if ((*root).left)
			btree_apply_suffix((*root).left, (*applyf));
		if ((*root).right)
			btree_apply_suffix((*root).right, (*applyf));
		(*applyf)((*root).item);
	}
}
