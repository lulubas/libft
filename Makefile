# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 22:10:10 by lbastien          #+#    #+#              #
#    Updated: 2022/10/11 17:32:48 by lbastien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

CC =		gcc
CFLAG =		-Wall -Wextra -Werror

AR =		ar rcs
RM =		rm -f

SRC =		$(wildcard *.c)
OBJ =		$(SRC:%.c=%.o)
HEAD =		libft.h

all:		$(NAME)

$(NAME):	$(OBJ) $(HEAD)
	$(AR) $(NAME) $(OBJ)

%.o: 		%.c
	$(CC) $(CFLAG) -I./ -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: 	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
