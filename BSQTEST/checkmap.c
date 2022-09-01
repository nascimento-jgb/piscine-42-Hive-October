/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:34:40 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 15:59:16 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

int	conditions(char *str, int begin)
{
	if (str == NULL || str[0] == '\0' || str[begin + 1] == '\0'
		|| str[(end_map(str)) - 1] != '\n' || compare_first_line(str) == -1)
	{
		write(2, "map error\n", 11);
		return (-1);
	}
	else
		return (0);
}

int	checkmap(char *str, int begin)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i + begin + 1] != '\0')
	{
		if (str[i + begin + 1] == '\n')
		{
			if (count < row_count(str) || count > row_count(str))
			{
				write(2, "map error\n", 11);
				return (-1);
			}
			count = -1;
		}
		count++;
		i++;
	}
	if (conditions(str, begin) == -1)
		return (-1);
	return (0);
}
