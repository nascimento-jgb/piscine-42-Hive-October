/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:15:50 by jonascim          #+#    #+#             */
/*   Updated: 2022/08/18 21:40:55 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_lines(int hour, int hour2)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. ", hour);
	printf("AND %d.00 A.M.\n", hour2);
}

void	print_lines2(int hour, int hour2)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. ", hour);
	printf("AND %d.00 P.M.\n", hour2);
}

void	print_lines3(int hour, int hour2)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. ", hour);
	printf("AND %d.00 P.M.\n", hour2);
}

void	print_lines4(int hour, int hour2)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. ", hour);
	printf("AND %d.00 A.M.\n", hour2);
}

void	ft_takes_place(int hour)
{
	if (hour > 0 && hour < 12 && hour != 11)
		print_lines(hour, hour + 1);
	else if (hour == 0)
		print_lines(hour + 12, hour + 1);
	else if (hour > 12 && hour < 24 && hour != 23)
		print_lines2(hour, hour + 1);
	else if (hour == 11)
		print_lines3(hour, hour + 1);
	else if (hour == 12)
		print_lines2(hour, hour - 11);
	else if (hour == 24)
		print_lines(hour - 12, hour - 23);
	else if (hour == 23)
		print_lines4(hour, hour - 11);
}
