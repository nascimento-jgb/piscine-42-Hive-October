/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_first_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:15:35 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 13:12:50 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

int	compare_first_line(char *str)
{
	int		i;
	char	temp[3];
	int		begin;

	begin = begin_map(str);
	i = 0;
	temp[0] = str[begin - 3];
	temp[1] = str[begin - 2];
	temp[2] = '\0';
	i = 0;
	while (str[i + begin] != '\0')
	{
		if (str[i + begin] != temp[0] && str[i + begin] != temp[1])
		{
			if (str[i + begin] != '\n')
				return (-1);
		}
		i++;
	}
	return (0);
}
