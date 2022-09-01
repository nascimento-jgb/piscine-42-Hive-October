# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 09:48:13 by jonascim          #+#    #+#              #
#    Updated: 2022/08/23 15:52:24 by jonascim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCEDIR = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
			./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADERDIR = ./includes/

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

$(NAME): $(SOURCEDIR)
	$(CC) -c $(CFLAGS) $(SOURCEDIR) -I $(HEADERDIR)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
