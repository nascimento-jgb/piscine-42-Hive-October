/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:26:07 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/25 10:28:42 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if(root != NULL)
	{
		btree_apply_prefix((*root).left, (*applyf));
		(*root).data = (*applyf)(*root).data;
		btree_apply_prefix((*root).right, (*applyf));
	}
}
