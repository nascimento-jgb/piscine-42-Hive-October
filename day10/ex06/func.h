/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:35:02 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/23 10:29:44 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_H
# define FUNC_H

int		ft_atoi(char *str);
char	*ft_atoi_remove(char *str);
int		ft_strcmp(char *str1, char *str2);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		sum(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);

#endif
