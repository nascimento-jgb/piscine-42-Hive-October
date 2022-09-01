/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:59:26 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/25 10:25:57 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if(root != NULL)
	{
		(*root).data = (*applyf)(*root).data;
		btree_apply_prefix((*root).left, (*applyf));
		btree_apply_prefix((*root).right, (*applyf));
	}
}

int	main()
{
	
}
