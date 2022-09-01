/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:15:24 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 22:16:09 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	row_count(char *str)
{
	int	i;
	int	row;
	int	begin;

	i = 0;
	row = 0;
	begin = begin_map(str);
	while (str[i + begin] != '\0')
	{
		if (str[i + begin + 1] == '\n')
		{
			row = i;
			break ;
		}
		i++;
	}
	return (row);
}
