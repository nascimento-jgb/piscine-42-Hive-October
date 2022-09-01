/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:09:01 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/13 20:11:50 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power != 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
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
