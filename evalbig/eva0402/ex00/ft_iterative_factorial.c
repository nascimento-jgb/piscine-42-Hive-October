/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:56:40 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/14 15:17:05 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    if (power != 0)
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

int main(void)
{
	printf("%d\n", ft_iterative_power(5, -1));
	return (0);
}
