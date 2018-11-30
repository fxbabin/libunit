# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 22:51:42 by fbabin            #+#    #+#              #
#    Updated: 2018/11/29 19:57:29 by fbabin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	test_signals

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra

_SRCS_M			=	main.c

_SRCS_SIGNALS  	=	00_signals_launcher.c 03_signals_print_ok.c \
					06_signals_abort.c ft_strcat.c 01_signals_ok.c \
					04_signals_print_ko.c 07_signals_fpe.c 02_signals_ko.c \
					05_signals_buse.c 08_signals_timeout.c ft_putstr.c \
					09_signals_segv.c ft_strlen.c

_LIBUNIT		=	libunit.a
HEADER_DIR		=	../framework/includes
HEADER			=	$(HEADER_DIR)/libunit.h

SRCS_DIR		= .
SRCS_SIGNALS	= signals
LIBUNIT_DIR		= ../framework
SRCS			= $(addprefix $(SRCS_DIR)/, $(_SRCS_M))
SRCS			+= $(addprefix $(SRCS_SIGNALS)/, $(_SRCS_SIGNALS))
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

test: $(NAME)
		@./$(NAME)

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
