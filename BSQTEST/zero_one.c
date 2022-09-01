/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:59:04 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 17:02:50 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

int	**malloc_int(int y, int x)
{
	int	j;
	int	**result;

	j = 0;
	result = (int **)malloc(sizeof(int *) * y);
	while (j < y)
	{
		result[j] = (int *)malloc(sizeof(int) * x);
		j++;
	}
	return (result);
}

int	**zero_one(char **str, int y, int x)
{
	int	i;
	int	j;
	int	**result;

	i = 0;
	j = 0;
	result = malloc_int(y, x);
	while (i < y)
	{
		while (j < x)
		{
			if (str[i][j] == 'o')
				result[i][j] = 0;
			else
				result[i][j] = 1;
			j++;
		}
		j = 0;
		i++;
	}
	return (result);
}
