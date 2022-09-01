/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:15:24 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 13:15:12 by druina           ###   ########.fr       */
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
