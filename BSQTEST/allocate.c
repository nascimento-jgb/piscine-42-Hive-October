/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:31:07 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/31 11:28:58 by druina           ###   ########.fr       */
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
			printf("%i, %i, %i, %i\n", i, j, y, x);
			if(i == 0 && j == 0)
				result[i][j] = 0;
			else if ((j > 0 && j <=27) && (i > 0 && i<=9))
				result[i][j] = arr[i][j];
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

void	swap_back(int **aux, int line, int column)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < line) // need to be changed for a generic height
	{
		while (j < column) // need to be changed for a generic lenght
		{
			if (aux[i][j] != 0) // swapping all numbers for 1
				aux[i][j] = 1;
			j++;
		}
		i++;
		j = 0;
	}
}
