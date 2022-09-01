/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:46:35 by druina            #+#    #+#             */
/*   Updated: 2022/08/31 12:29:20 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#include "header.h"

int main()
{
	int buff_size;
	int i;
	int line;
	int row;
	int fd;
	int ret;
	char c;
	char **arr;
	int **arr2;
	int beginmap;
	buff_size = 8;
	char *buff;
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
	line = line_count(buff);
	row = row_count(buff);
	//printf("%d", fd);
	//printf("%s\n", buff);
	//printf("%sadasd", "\n");
	arr = generate_arr(buff, line, row, beginmap);
	arr2 = zero_one(arr, line, row);
	//printf("%sadasd", "\n");
	// printf("%d", fd);
	// printf("%s\n", buff);
	maximal_square(arr2, line, row);
	/*for (int rows = 0; rows < line; rows++)
	{
		for (int columns = 0; columns < row; columns++)
		{
			printf("%d", arr2[rows][columns]);
		}
		printf("%s", "\n");
	}
	printf("%s", "\n");*/

	return (0);
}
