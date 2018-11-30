# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbabin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 19:49:12 by fbabin            #+#    #+#              #
#    Updated: 2018/12/01 00:02:26 by fbabin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libunit.a

CC				=	gcc
FLAGS			=	-Wall -Werror -Wextra

_SRCS			=	test_list.c tests_run.c test_stdout.c test_putstr.c \
					tests_run_wrapper.c test_putstr_wrapper.c

HEADER_DIR		=	includes
HEADER			=	$(HEADER_DIR)/libunit.h
SRCS_DIR		=	srcs
SRCS			=	$(addprefix $(SRCS_DIR)/, $(_SRCS))
OBJS			=	$(SRCS:.c=.o)

#COLORS
_CYAN=\x1b[36m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_END=\x1b[0m

all: $(HEADER) $(NAME)

$(NAME): $(OBJS)
		@ar rcs $(NAME) $(OBJS)
		@echo "$(NAME) : $(_GREEN)Done$(_END)"

%.o : %.c $(HEADER)
		@$(CC) $(CFLAGS) -c $< -o $@ -I includes/

clean:
		@/bin/rm -f $(OBJS)
		@echo "libunit clean : $(_GREEN)Done$(_END)"

fclean: clean
		@/bin/rm -f $(NAME)
		@echo "libunit fclean : $(_GREEN)Done$(_END)"

re:
		@make fclean
		@make

.PHONY: all clean fclean re
