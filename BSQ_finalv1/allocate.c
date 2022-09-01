/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:31:07 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/31 16:49:45 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	**allocate_zeros(int **arr, int y, int x)
{
	int	i;
	int	j;
	int	**result;

	i = 0;
	j = 0;
	result = (int **)malloc(sizeof(int *) * (y + 1));
	while (j < y + 1)
	{
		result[j] = (int *)malloc(sizeof(int) * (x + 1));
		j++;
	}
	j = 0;
	while (i < y + 1)
	{
		while (j < x + 1)
		{
			if (i <= y - 1 && j <= x - 1)
				result[i + 1][j + 1] = arr[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return (result);
}

int	**remove_zeros(int **arr, int y, int x)
{
	int	i;
	int	j;
	int	**result;

	i = 0;
	j = 0;
	result = (int **)malloc(sizeof(int *) * y);
	while (j < y)
	{
		result[j] = (int *)malloc(sizeof(int) * x);
		j++;
	}
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			result[i][j] = arr[i + 1][j + 1];
			j++;
		}
		j = 0;
		i++;
	}
	return (result);
}
