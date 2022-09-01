/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:20:17 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 18:50:46 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	**generate_arr(char *str, int y, int x, int beginmap);
int		**zero_one(char **str, int y, int x);
char	*buff_creation(int buff_size, int fd);
int		begin_map(char *str);
int		row_count(char *str);
int		line_count(char *str);
int		**allocate_zeros(int **arr, int y, int x);
int		**remove_zeros(int **arr, int y, int x);
void	print_map(int **aux, int line, int column);
void	swap_back(int **aux, int line, int column);
int		get_positioni(int **aux, int line, int column, int maxsqlen);
int		get_positionj(int **aux, int line, int column, int maxsqlen);
void	check_position(int maxsqlen, int **dp, int line, int column);
int		find_min(int a, int b);
int		find_max(int a, int b);
void	maximal_square(int **arr2, int line, int column);
void	*ft_memcpy(void *dst, const void *src, unsigned int size);
char	*ft_realloc(char *ptr, unsigned int size);
int		end_map(char *str);
int		checkmap(char *str, int begin);
int		compare_first_line(char *str);
int		conditions(char *str, int begin);
int		**malloc_int(int y, int x);
char	**malloc_char(int y, int x);

#endif
