/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:07:49 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/24 19:16:15 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new;
	int		i;

	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&new, av[i]);
		i++;
	}
	return (new);
}

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
