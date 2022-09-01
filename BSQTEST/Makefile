# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: druina <druina@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 12:40:05 by druina            #+#    #+#              #
#    Updated: 2022/08/31 12:57:33 by druina           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = bsq

SRC = allocate.c begin_map.c checkmap.c compare_first_line.c endmap.c find_sqr.c generate_arr.c line_count.c main.c memory.c row_count.c zero_one.c

FLAGS = -Wall -Wextra -Werror

HEADER = header.h

all : $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC) -I $(HEADER)

fclean:
	rm -f $(NAME)
	
re: fclean all