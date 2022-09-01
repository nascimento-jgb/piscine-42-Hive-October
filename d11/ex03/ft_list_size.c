/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:00:04 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/24 19:28:00 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*aux;
	int		counter;

	aux = begin_list;
	counter = 0;
	while (begin_list)
	{
		aux = (*aux).next;
		counter++;
	}
	return (counter);
}
