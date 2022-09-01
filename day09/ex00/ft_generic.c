/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:04:46 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/18 21:41:02 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void)
{
	write(1, "Tu", 2);
	write(1, " ", 1);
	write(1, "tu", 2);
	write(1, " ", 1);
	write(1, "tu", 2);
	write(1, " ", 1);
	write(1, "tu", 2);
	write(1, " ", 1);
	write(1, ";", 1);
	write(1, " ", 1);
	write(1, "Tu", 2);
	write(1, " ", 1);
	write(1, "tu", 2);
	write(1, " ", 1);
	write(1, "tu", 2);
	write(1, " ", 1);
	write(1, "tu", 2);
	write(1, "\n", 1);
}
