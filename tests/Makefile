# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 22:51:42 by fbabin            #+#    #+#              #
#    Updated: 2018/12/02 23:41:01 by fbabin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	test_signals

CC					=	gcc
CFLAGS				=	-Wall -Werror -Wextra

_SRCS_M				=	main.c

_SRCS				=	ft_strcat.c ft_strlen.c ft_strjoinclr.c \
						ft_strcat_len.c ft_random_formula.c ft_putstr_wrong.c \
						ft_putstr.c ft_fibonacci.c

_SRCS_STRCAT		= 	00_strcat_launcher.c 01_strcat_ok.c 
_SRCS_STRLEN		= 	00_strlen_launcher.c 01_strlen_segv.c 
_SRCS_STRJOINCLR	= 	00_strjoinclr_launcher.c 01_strjoinclr_abort.c 
_SRCS_STRCAT_LEN	= 	00_strcat_len_launcher.c 01_strcat_len_buse.c 
_SRCS_RAND_FORM		= 	00_random_formula_launcher.c 01_random_formula_fpe.c 
_SRCS_PUTSTR_W		= 	00_putstr_wrong_launcher.c 01_putstr_wrong_print_ko.c 
_SRCS_PUTSTR		= 	00_putstr_launcher.c 01_putstr_print_ok.c 
_SRCS_FIBONACCI		= 	00_fibonacci_launcher.c 01_fibonacci_timeout.c 

_LIBUNIT			=	libunit.a
HEADER_DIR			=	../framework/includes
HEADER				=	$(HEADER_DIR)/libunit.h

SRCS_DIR			= .
SRCS_TEST			= tested_functions
SRCS_STRCAT			= ft_strcat
SRCS_STRLEN			= ft_strlen
SRCS_STRJOINCLR		= ft_strjoinclr
SRCS_STRCAT_LEN		= ft_strcat_len
SRCS_RAND_FORM		= ft_random_formula
SRCS_PUTSTR_W		= ft_putstr_wrong
SRCS_PUTSTR			= ft_putstr
SRCS_FIBONACCI		= ft_fibonacci
LIBUNIT_DIR			= ../framework
SRCS				= $(addprefix $(SRCS_DIR)/, $(_SRCS_M))
SRCS				+= $(addprefix $(SRCS_STRCAT)/, $(_SRCS_STRCAT))
SRCS				+= $(addprefix $(SRCS_STRLEN)/, $(_SRCS_STRLEN))
SRCS				+= $(addprefix $(SRCS_STRJOINCLR)/, $(_SRCS_STRJOINCLR))
SRCS				+= $(addprefix $(SRCS_STRCAT_LEN)/, $(_SRCS_STRCAT_LEN))
SRCS				+= $(addprefix $(SRCS_RAND_FORM)/, $(_SRCS_RAND_FORM))
SRCS				+= $(addprefix $(SRCS_PUTSTR_W)/, $(_SRCS_PUTSTR_W))
SRCS				+= $(addprefix $(SRCS_PUTSTR)/, $(_SRCS_PUTSTR))
SRCS				+= $(addprefix $(SRCS_FIBONACCI)/, $(_SRCS_FIBONACCI))
SRCS				+= $(addprefix $(SRCS_TEST)/, $(_SRCS))
LIBUNIT				= $(addprefix $(LIBUNIT_DIR)/, $(_LIBUNIT))
OBJS				= $(SRCS:.c=.o)

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
