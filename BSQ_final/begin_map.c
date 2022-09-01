/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:10:27 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 20:25:18 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	begin_map(char *str)
{
	int	i;
	int	beginmap;

	i = 0;
	beginmap = 0;
	while (str[i] != '\n')
		i++;
	beginmap = i;
	return (beginmap);
}
