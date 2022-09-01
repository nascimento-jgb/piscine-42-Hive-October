/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:03:22 by ekoljone          #+#    #+#             */
/*   Updated: 2022/08/21 23:24:08 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		check_small_matrix(int line, int colum, int nb);

int		check_safe(int line, int colum, int nb);

int		*convert_strings(char **old);

int		solve_sudoku(int line, int colum);

void	make_grid(int amount, char **argv);

void	print_matrix(void);

int	*convert_strings(char **old)
{
	int	*newstring;
	int	i;
	int	j;
	int	n;

	newstring = (int *) malloc (100 * sizeof(int));
	n = 0;
	i = 0;
	j = 1;
	while (j <= 9)
	{
		while ((old[j][i] > 48 && old[j][i] < 58) || old[j][i] == 46)
		{
			if (old[j][i] == 46 && i < 9 && old[j][i] != '\0')
				newstring[n] = 0;
			if (old[j][i] > 48 && old[j][i] < 58 && old[j][i] != '\0' )
				newstring[n] = old[j][i] - 48;
			n++;
			i++;
		}
		i = 0;
		j++;
	}
	return (newstring);
}

int	main(int argc, char **argv)
{
	make_grid(argc, argv);
	if (solve_sudoku(0, 0) == 1)
		print_matrix();
	else
		write(1, "Error", 5);
	return (0);
}
