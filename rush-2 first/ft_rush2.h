/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush2.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:17:54 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/28 13:52:35 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH2_H
# define FT_RUSH2_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	print_rush(int rush, int count);
void	print_result(void);
int		check_first(char first, char middle, char last, char *str);
int		check_last(char first, char middle, char last, char *str);
int		check_vertical(char middle, char *str);
void	match(char *input);
void	*ft_memcpy(void *dst, const void *src, unsigned int size);
char	*ft_realloc(char *ptr, unsigned int size);
void	width_height(char *str);

int	g_height;
int	g_width;
int	g_rushes[5];

#endif
