/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:36:49 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/31 23:13:46 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_map(int **aux, int line, int column)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < line)
	{
		while (j < column)
		{
			if (aux[i][j] == 9)
				c = 'X';
			else if (aux[i][j] == 1)
				c = '.';
			else if (aux[i][j] == 0)
				c = 'o';
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}

void	swap_back(int **aux, int line, int column)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < line)
	{
		while (j < column)
		{
			if (aux[i][j] != 0 && aux[i][j] != 9)
				aux[i][j] = 1;
			j++;
		}
		i++;
		j = 0;
	}
}

int	get_positioni(int **aux, int line, int column, int maxsqlen)
{
	int	posi;
	int	i;
	int	j;
	char e;
	char c;

	i = 0;
	j = 0;
	posi = 0;
	while (i < line)
	{
		while (j < column)
		{
			c = aux[i][j] + '0';
			write(1, &c, 1);
			if (aux[i][j] == maxsqlen)
			{
				posi = i;
				break ;
			}
			j++;
			write(1, "\n", 1);
		}
		i++;
		j = 0;
	}
	write(1, "\n", 1);
	e = posi + '0';
	write(1, &e, 1);
	write(1, "\n", 1);
	return (posi);
}

int	get_positionj(int **aux, int line, int column, int maxsqlen)
{
	int	posj;
	int	i;
	int	j;
	char e;

	i = 0;
	j = 0;
	posj = 0;
	while (i < line)
	{
		while (j < column)
		{
			if (aux[i][j] == maxsqlen)
			{
				posj = j;
				break ;
			}
			j++;
		}
		i++;
		j = 0;
	}
	e = posj + '0';
	write(1, &e, 1);
	write(1, "\n", 1);
	return (posj);
}

void	check_position(int maxsqlen, int **dp, int line, int column)
{
	int	**aux;
	int	i;
	int	j;
	int	posi;
	int	posj;

	aux = remove_zeros(dp, line, column);
	posi = get_positioni(aux, line, column, maxsqlen);
	posj = get_positionj(aux, line, column, maxsqlen);
	swap_back(aux, line, column);
	i = 0;
	j = 0;
	while (i < maxsqlen)
	{
		while (j < maxsqlen)
		{
			aux[posi - i][posj - j] = 9;
			j++;
		}
		i++;
		j = 0;
	}
	print_map(aux, line, column);
}
