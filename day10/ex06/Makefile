# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 09:48:13 by jonascim          #+#    #+#              #
#    Updated: 2022/08/23 13:46:40 by jonascim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CFLAGS = -Wall -Wextra -Werror
SRCFILES = do-op.c ft_atoi.c aux_func.c ft_putnbr.c ft_strcmp.c
CC = gcc


ALL: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRCFILES)

clean:
	/bin/rm -f $(NAME)
