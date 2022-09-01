/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:44:43 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/24 19:15:51 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*next;
	t_list	*node;
	t_list	*root;

	node = 0;
	root = *begin_list;
	while (root)
	{
		next = (*root).next;
		(*root).next = node;
		node = root;
		root = next;
	}
	*begin_list = node;
}
