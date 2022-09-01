    /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:19:38 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/21 23:35:35 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	g_grid[10][9];

int		*convert_strings(char **old);
void	make_grid(int amount, char **argv);

int	check_small_matrix(int line, int colum, int nb)
{
	int	nline;
	int	ncolum;
	int	i;
	int	j;

	i = 0;
	j = 0 ;
	nline = line - (line % 3);
	ncolum = colum - (colum % 3);
	while (i < 3)
	{
		while (j < 3)
		{
			if (g_grid[i + nline][j + ncolum] == nb)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_safe(int line, int colum, int nb)
{
	int	aux;

	aux = 0;
	while (aux < 9)
	{
		if (g_grid[line][aux] == nb)
			return (0);
		aux++;
	}
	aux = 0;
	while (aux <= 8)
	{
		if (g_grid[aux][colum] == nb)
			return (0);
		aux++;
	}
	if (check_small_matrix(line, colum, nb) == 0)
		return (0);
	return (1);
}

int	solve_sudoku(int line, int colum)
{
	int	nb;

	if ((line == 8 && colum == 9) || line == 9)
		return (1);
	if (colum == 9)
	{
		line++;
		colum = 0;
	}
	if (g_grid[line][colum] > 0)
		return (solve_sudoku(line, colum + 1));
	nb = 1;
	while (nb <= 9)
	{
		if (check_safe(line, colum, nb) == 1)
		{
			g_grid[line][colum] = nb;
			if (solve_sudoku(line, colum + 1) == 1)
				return (1);
		}
		g_grid[line][colum] = 0;
		nb++;
	}
	return (0);
}

void	make_grid(int amount, char **argv)
{
	int	i;
	int	j;
	int	*newstring;
	int	n;

	newstring = convert_strings(argv);
	j = 0;
	n = 0;
	while (j < amount)
	{
		i = 0;
		while (i < amount - 1)
		{
			g_grid[j][i] = newstring[n];
			n++;
			i++;
		}
		j++;
	}
	free(newstring);
}

void	print_matrix(void)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j < 9)
		{
			c = g_grid[i - 1][j] + '0';
			write (1, &c, 1);
			if (j < 8)
				write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
