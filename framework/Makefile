# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 17:49:24 by fbabin            #+#    #+#              #
#    Updated: 2018/09/30 20:59:40 by fbabin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libunit.a

CC				=	gcc
FLAGS			=	-Wall -Werror -Wextra -Ofast

_SRCS			=	test_lst.c tests_run.c test_stdout.c test_putstr.c
					tests-run_wrapper

SRCS_DIR		=	srcs
SRCS			=	$(addprefix $(SRCS_DIR)/, $(_SRCS))
OBJS			=	$(SRCS:.c=.o)


#COLORS
_CYAN=\x1b[36m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_END=\x1b[0m

all: $(NAME)

$(NAME): $(OBJS)
		@ar rcs $(NAME) $(OBJS)
		@echo "$(NAME) : $(_GREEN)Done$(_END)"

%.o : %.c
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
