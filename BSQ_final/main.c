/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:46:35 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 22:50:53 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "header.h"

int main(void)
{
	int		buff_size;
	int		i;
	int		line;
	int		row;
	int		fd;
	char	c;
	char	**arr;
	int		**arr2;
	int		beginmap;
	int		check;
	char	*buff;
	buff_size = 8;
	buff = malloc(sizeof(char *));
	fd = open("map.txt", O_RDONLY);
	i = 0;
	while ((read(fd, &c, 1)))
	{
		buff[i++] = c;
		if (i >= buff_size)
		{
			buff_size *= 2;
			buff = ft_realloc(buff, buff_size);
		}
	}
	buff[i + 1] = '\0';
	line = 0;
	row = 0;
	beginmap = begin_map(buff);
	row = row_count(buff);
	line = line_count(buff);
	check = checkmap(buff, beginmap);
	arr = generate_arr(buff, line, row, beginmap);
	arr2 = zero_one(arr, line-1, row);
	maximal_square(arr2, line-1, row);
	return (0);
}
