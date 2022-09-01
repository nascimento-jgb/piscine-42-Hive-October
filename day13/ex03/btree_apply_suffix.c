/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:27:31 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/25 10:28:46 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if(root != NULL)
	{
		btree_apply_prefix((*root).left, (*applyf));
		btree_apply_prefix((*root).right, (*applyf));
		(*root).data = (*applyf)(*root).data;
	}
}
