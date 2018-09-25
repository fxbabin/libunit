# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 22:51:42 by fbabin            #+#    #+#              #
#    Updated: 2018/03/04 14:32:02 by fbabin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	test

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra

_SRCS			=	main.c

_LIBUNIT		=	libunit.a
HEADER_DIR		=	includes
HEADER			=	$(HEADER_DIR)/test.h

SRCS_DIR		= .
LIBUNIT_DIR		= framework
SRCS			= $(addprefix $(SRCS_DIR)/, $(_SRCS))
LIBUNIT			= $(addprefix $(LIBUNIT_DIR)/, $(_LIBUNIT))
OBJS			= $(SRCS:.c=.o)

#COLORS
_CYAN=\x1b[36m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_END=\x1b[0m

all: $(NAME)

$(NAME): $(HEADER) $(LIBUNIT) $(OBJS)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIBUNIT_DIR) -lunit -I $(HEADER_DIR)
		@echo "$(NAME) : $(_GREEN)Done$(_END)"

$(LIBUNIT):
		@make -C $(LIBUNIT_DIR)

%.o : %.c
		@$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_DIR)

clean:
		@make fclean -C $(LIBUNIT_DIR)
		@/bin/rm -f $(OBJS)
		@echo "test clean : $(_GREEN)Done$(_END)"

fclean: clean
		@/bin/rm -f $(NAME)
		@echo "test fclean : $(_GREEN)Done$(_END)"

re:
		@make fclean
		@make

.PHONY: all clean fclean re
