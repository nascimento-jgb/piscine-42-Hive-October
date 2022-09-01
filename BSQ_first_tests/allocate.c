/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:31:07 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/31 12:29:17 by jonascim         ###   ########.fr       */
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
			if (i <= y-1 && j <= x-1)
				result[i+1][j+1] = arr[i][j];
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
	//simple print
	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			printf("%d", result[i][j]);
			j++;
		}
		printf("%s", "\n");
		i++;
		j = 0;
	}
	printf("%s", "\n");

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
