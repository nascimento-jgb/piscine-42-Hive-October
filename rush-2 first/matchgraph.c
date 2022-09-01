/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matchgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:50:33 by lidzhang          #+#    #+#             */
/*   Updated: 2022/08/28 16:06:36 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush2.h"

int	check_first(char first, char middle, char last, char *str)
{
	int	i;
	int	output;

	output = 0;
	while (g_height > 0 && g_width > 0)
	{
		i = 0;
		while (i < g_width && str[i] != '\0')
		{
			if (i == 0)
				output += (str[i] != first);
			else if (g_width >= 2 && i == g_width - 1 )
				output += (str[i] != last);
			else
				output += (str[i] != middle);
			i++;
		}
		if (i != g_width)
			return (1);
	}
	return (output);
}

int	check_last(char first, char middle, char last, char *str)
{
	int	i;
	int	lines;

	i = 0;
	lines = 1;
	if (g_height >= 2 && g_width > 0)
	{
		while (str[i] != '\0' && lines < g_height)
		{
			if (str[i] == '\n')
				lines++;
			i++;
		}
		if (lines == g_height)
			return (check_first(first, middle, last, &str[i]));
		else
			return (1);
	}
	return (0);
}

int	check_vertical(char middle, char *str)
{
	int		i;
	int		output;
	int		lines;

	i = g_width + 1;
	output = 0;
	lines = 2;
	if (g_height >= 3 && g_width > 0)
	{
		while (str[i] != '\0' && lines < g_height)
		{
			if (i % (g_width + 1) == 0 || i % (g_width + 1) == g_width - 1)
				output += (str[i]!= middle);
			else if (str[i] == '\n')
				lines++;
			else
				output += (str[i] != ' ');
			i++;
		}
		return (output);
	}
	return (0);
}

void	width_height(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str != '\n' && *str)
	{
		g_width++;
		str++;
	}
	str = tmp;
	while (*str++)
		if (*str == '\n')
			g_height++;
}

void	match(char *input)
{
	char	*rushes;

	rushes[0] += check_first('o', '-', 'o', input);
	rushes[0] += check_vertical('|', input);
	rushes[0] += check_last('o', '-', 'o', input);
	rushes[1] += check_first('/', '*', '\\', input);
	rushes[1] += check_vertical('|', input);
	rushes[1] += check_last('\\', '*', '/', input);
	rushes[2] += check_first('A', 'B', 'A', input);
	rushes[2] += check_vertical('B', input);
	rushes[2] += check_last('C', 'B', 'C', input);
	rushes[3] += check_first('A', 'B', 'C', input);
	rushes[3] += check_vertical('B', input);
	rushes[3] += check_last('A', 'B', 'C', input);
	rushes[4] += check_first('A', 'B', 'C', input);
	rushes[4] += check_vertical('B', input);
	rushes[4] += check_last('C', 'B', 'A', input);
}
