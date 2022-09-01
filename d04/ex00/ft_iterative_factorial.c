/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:56:40 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/13 19:06:31 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	while (nb > 1)
	{
		if (nb < 13 && nb != 1)
		{
			res = res * (nb -1);
		}
		else
		{
			return (0);
		}
		nb--;
	}
	return (res);
}
