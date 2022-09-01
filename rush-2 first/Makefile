# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 11:41:54 by lidzhang          #+#    #+#              #
#    Updated: 2022/08/28 10:36:49 by jonascim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		rush-2
SRC_DIR		=		./srcs/
FILENAME	=		*.c
RM			=		/bin/rm -f

OPTIONS 	= 		-I includes
FLAGS 		= 		-Wall -Wextra -Werror
FUNCTION	= 		mathgraph printrush readgraph memory

CFILE		=		$(SRC_DIR)$(FILENAME)
OBJECTS 	= 		$(patsubst %, %.o, $(FUNCTION))

all: $(NAME)

$(OBJECTS):
		@gcc $(OPTIONS) $(FLAGS) -c $(CFILES)

$(NAME): $(OBJECTS)
		@gcc $(OPTIONS) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
		@$(RM) $(OBJECTS)

fclean:
		@$(RM) $(NAME)

re:
		fclean all
