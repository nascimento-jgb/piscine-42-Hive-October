/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:06:16 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/25 17:35:15 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	lefth;
	int	righth;

	if (root == NULL)
		return (-1);
	else
	{
		lefth = btree_level_count((*root).left);
		righth = btree_level_count((*root).right);
		if (lefth > righth)
			return (lefth + 1);
		else
			return (righth + 1);
	}
}
