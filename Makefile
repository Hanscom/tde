# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmizzi <cyril.mizzi@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/07/31 15:16:20 by cmizzi            #+#    #+#              #
#    Updated: 2013/08/05 17:27:16 by cmizzi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC          = gcc
LDFLAGS     = -Wall -Werror -Wextra
GUIFLAGS	= `pkg-config --cflags --libs gtk+-2.0`
NAME        = tde
PATH_SRCS   = ./sources
GUI_SRCS	= $(PATH_SRCS)/gui
PATH_INC    = ./includes
SRC         = $(PATH_SRCS)/main.c $(GUI_SRCS)/init.c
OBJ         = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(LDFLAGS) -o $(NAME) $(OBJ) -I $(PATH_INC) $(GUIFLAGS)

.c.o:
	$(CC) $(LDFLAGS) -c $< -o $@ -I $(PATH_INC) $(GUIFLAGS)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean make
