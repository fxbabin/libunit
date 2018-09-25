# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 17:49:24 by fbabin            #+#    #+#              #
#    Updated: 2018/06/19 16:50:46 by fbabin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libunit.a

CC				=	gcc
FLAGS			=	-Wall -Werror -Wextra -Ofast

_SRCS			=	unitt_lst.c
_LIBFT			=	libft.a

SRCS_DIR		=	srcs
LIB_DIR			=	libft
SRCS			=	$(addprefix $(SRCS_DIR)/, $(_SRCS))
LIBFT			=	$(addprefix $(LIB_DIR)/, $(_LIBFT))
OBJS			=	$(SRCS:.c=.o)


#COLORS
_CYAN=\x1b[36m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_END=\x1b[0m

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
		@libtool -static -o $(NAME) $(OBJS) $(LIBFT)
		@echo "$(NAME) : $(_GREEN)Done$(_END)"

$(LIBFT):
		@make -C $(LIB_DIR)

%.o : %.c
		@$(CC) $(CFLAGS) -c $< -o $@ -I includes/

clean:
		@/bin/rm -f $(OBJS)
		@echo "libft clean : $(_GREEN)Done$(_END)"

fclean: clean
		@/bin/rm -f $(NAME)
		@echo "libft fclean : $(_GREEN)Done$(_END)"

re:
		@make fclean
		@make

.PHONY: all clean fclean re
