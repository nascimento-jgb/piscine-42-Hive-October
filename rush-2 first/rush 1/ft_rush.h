/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:17:54 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/28 11:02:28 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <unistd.h>

void	print_line00(char a, char b, int d);
int		rush00(int x, int y);
void	print_header(char a, char b, char c, int d);
void	print_middle(char a, char b, int d);
int		rush01(int x, int y);
void	print_line02(char a, char b, int d);
int		rush02(int x, int y);
void	print_acline(char a, char b, int d);
void	print_line03(char a, char b, int d);
int		rush03(int x, int y);
void	print_accaline(char a, char b, char c, int d);
void	print_line04(char a, char b, int d);
int		rush04(int x, int y);
char	*ft_atoi_remove(char *str);
int		ft_atoi(char *str);
int		ft_strcmp(char *str1, char *str2);
void	ft_putchar(char c);

#endif
