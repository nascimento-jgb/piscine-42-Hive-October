/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_sqr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:40:39 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/31 12:52:52 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	find_min(int a, int b)
{
	if (a > b)
		return (b);
	else if (a <= b)
		return (a);
	else
		return (0);
}

int	find_max(int a, int b)
{
	if (a > b)
		return (a);
	else if (b >= a)
		return (b);
	else
		return(0);
}

void	print_map(int **aux, int line, int column)
{
	char	c;
	int i;
	int j;

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

int	swap_square(int posi, int posj, int **aux, int line, int column)
{
	int i;
	int j;

	i = 0;
	j = 0;
	printf("%sadasd", "\n");
	//swap_back(aux, line, column);
	/*while (i < line) // need to be changed for a generic height
	{
		while (j < column) // need to be changed for a generic lenght
		{
			if (aux[i][j] != 0) // swapping all numbers for 1
				aux[i][j] = 1;
			j++;
		}
		i++;
		j = 0;
	}*/
	while (i < line)
	{
		while (j < column)
		{
			aux[posi - i][posj - j] = 9; //making the square to present 9 and considering maxsqlen
			j++;
		}
		i++;
		j = 0;
	}

	// printing function
	while (i < line)
	{
		while (j < column)
		{
			printf("%d", aux[i][j]);
			j++;
		}
		printf("%s", "\n");
		i++;
		j = 0;
	}
	printf("%s", "\n");

	//print_map(aux, line, column);
	write(1, "\n", 1);
	return (0);
}

int	check_position(int maxsqlen, int **dp, int line, int column)
{
	int **aux;
	int i;
	int j;
	int posi;
	int posj;

	i = 0;
	j = 0;
	posi = 0;
	posj = 0;
	aux = remove_zeros(dp, line, column);

	while (i < line)
	{
		while (j < column)
		{
			if (aux[i][j] == maxsqlen)
			{
				posi = i;
				posj = j;				// insert a break here
				printf("%d\n", posi);
				printf("%d\n", posj);
				break;
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("%s", "\n");
	printf("%d", aux[posi][posj]);
	printf("%s", "\n");
	//swap_square(posi, posj, aux, line, column);
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
	i = 0;
	j = 0;
	while (i < line)
	{
		while (j < column)
		{
			if (aux[i][j] != 0 && aux[i][j] != 9) // swapping all numbers for 1
				aux[i][j] = 1;
			j++;
		}
		i++;
		j = 0;
	}
	printf("%s", "\n");
	// printing function
	i = 0;
	j = 0;
	while (i < line)
	{
		while (j < column)
		{
			printf("%d", aux[i][j]);
			j++;
		}
		printf("%s", "\n");
		i++;
		j = 0;
	}
	printf("%s", "\n");
	print_map(aux, line, column);
	printf("%s", "\n");
	return (0);
}

int	maximal_square(int **arr2, int line, int column)
{
	int **dp;
	int i;
	int j;
	int maxsqlen;

	dp = allocate_zeros(arr2, line, column);
	maxsqlen = 0;
	/*i = 0;
	j = 0;
	while (i < line + 1)
	{
		while (j < column + 1)
		{
			printf("%d", dp[i][j]);
			j++;
		}
		printf("%s", "\n");
		i++;
		j = 0;
	}*/
	i = 1;
	j = 1;
	while (i < line + 1)
	{
		while (j < column + 1)
		{
			if (dp[i][j] == 1)
			{
				dp[i][j] =  find_min(find_min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]) + 1;
				maxsqlen = find_max(maxsqlen, dp[i][j]);
			}
			j++;
		}
		i++;
		j = 1;
	}
	i = 0;
	j = 0;
	while (i < line + 1)
	{
		while (j < column + 1)
		{
			printf("%d", dp[i][j]);
			j++;
		}
		printf("%s", "\n");
		i++;
		j = 0;
	}
	printf("%s", "\n");
	//printf("%i, %i, \n", i, j);
	check_position(maxsqlen, dp, line, column);
	return (maxsqlen);
}

/*int	main(void)
{
	int lenght;
	int height;
	int res;

	height = 9;
	lenght = 27;
	int test[5][5] = {
			 {0, 1, 0, 1, 0},
			 {1, 1, 1, 1, 0},
			 {0, 1, 1, 1, 1},
			 {0, 1, 1, 1, 1},
			 {0, 0, 1, 1, 1}
			 };

	int test[9][27] = {
			 {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			 {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			 {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			 {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			 {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			 {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			 {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			 {1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
			 {1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			 };
	res = maximal_square(test, height, lenght);
	printf("%d\n", res);
	return (0);
}
*/
