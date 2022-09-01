/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 19:43:23 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/14 13:40:25 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (power > 0)
	{
		return (nb * ft_iterative_power(nb, power - 1));
	}
	else
	{
		if (power == 1 || power == 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
