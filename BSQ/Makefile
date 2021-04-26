# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/16 19:43:42 by psoto-go          #+#    #+#              #
#    Updated: 2020/12/16 22:00:22 by jparejo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
FILES = *.c
//FLAGS = -Wall -Wextra -Werror
CC = cc
CLEAN = rm -f
FLAGSNORMI = -R CheckForbiddenSourceHeader


all:
	$(CC) $(FLAGS) $(FILES) -o $(NAME) 

fclean:
	$(CLEAN) $(NAME)

norminette:
		norminette $(FLAGSNORMI)
