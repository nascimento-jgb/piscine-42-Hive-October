/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:20:17 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 17:03:57 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	**generate_arr(char *str, int y, int x, int beginmap);
int		**zero_one(char **str, int y, int x);
int		begin_map(char *str);
int		row_count(char *str);
int		line_count(char *str);
int		find_min(int a, int b);
int		find_max(int a, int b);
int		**allocate_zeros(int **arr, int y, int x);
int		**remove_zeros(int **arr, int y, int x);
void	print_map(int **aux, int line, int column);
int		swap_square(int posi, int posj, int **aux, int maxsqlen, int line, int column);
int		check_position(int maxsqlen, int **dp, int line, int column);
int		maximal_square(int **arr2, int line, int column);
void	swap_back(int **aux, int line, int column);
void	*ft_memcpy(void *dst, const void *src, unsigned int size);
char	*ft_realloc(char *ptr, unsigned int size);
int	    end_map(char *str);
int	    checkmap(char *str, int begin);
int	    compare_first_line(char *str);
int     conditions(char *str, int begin);
int     **malloc_int(int y, int x);
char    **malloc_char(int y, int x);

#endif
