/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:19:38 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/24 18:54:25 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*aux;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		aux = ft_create_elem(data);
		(*aux).next = (*begin_list);
		*begin_list = aux;
	}
}
