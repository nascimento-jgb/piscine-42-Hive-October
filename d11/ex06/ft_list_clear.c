/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:24:57 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/24 19:26:11 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	int	i;

	i = 0;
	while (*begin_list && (*begin_list[i]).next)
	{
		ft_list_clear(&(*begin_list[i]).next);
		i++;
	}
	free(*begin_list);
	*begin_list = NULL;
}
