# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 09:48:13 by jonascim          #+#    #+#              #
#    Updated: 2022/08/22 12:36:20 by jonascim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCEDIR = srcs/
HEADERDIR = includes/
CC = gcc
CFLAGS = -Wall -Wextra -c
FUNCTIONS = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
BINARY = $(patsubst %, %.o, $(FUNCTIONS))
NAME = libft.a

.PHONY = clean fclean re all

ALL: $(NAME)

$(NAME): $(BINARY)
	@ar rc $(NAME) $(BINARY);
	@ranlib $(NAME);

$(BINARY):
	$(CC) $(CFLAGS) $(patsubst %.o, $(SOURCEDIR)%.c, $@) - I $(HEADERDIR)

clean:
	@rm -f $(BINARY)

fclean:
	@rm -f $(NAME)

re:
	fclean all
