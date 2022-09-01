/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:26:07 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/25 16:48:21 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		if ((*root).left)
			btree_apply_infix((*root).left, (*applyf));
		(*applyf)((*root).item);
		if ((*root).right)
			btree_apply_infix((*root).right, (*applyf));
	}
}
