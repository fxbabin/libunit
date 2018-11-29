# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 22:51:42 by fbabin            #+#    #+#              #
#    Updated: 2018/09/30 17:02:20 by fbabin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	test_strcat

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra

_SRCS_M			=	main.c

_SRCS_STRCAT	=	ft_strcat.c 00_strcat_launcher.c 01_strcat_simple_1.c \
					02_strcat_simple_ko.c 03_strcat_null.c 04_strcat_buse.c

_SRCS_PUTSTR	=	ft_putstr.c 00_putstr_launcher.c 01_putstr_simple_1.c \
					02_putstr_null.c 03_putstr_zeros.c 

_LIBUNIT		=	libunit.a
HEADER_DIR		=	../framework/includes
HEADER			=	$(HEADER_DIR)/libunit.h

SRCS_DIR		= .
SRCS_STRCAT		= ft_strcat
SRCS_PUTSTR		= ft_putstr
LIBUNIT_DIR		= ../framework
SRCS			= $(addprefix $(SRCS_DIR)/, $(_SRCS_M))
SRCS			+= $(addprefix $(SRCS_STRCAT)/, $(_SRCS_STRCAT))
SRCS			+= $(addprefix $(SRCS_PUTSTR)/, $(_SRCS_PUTSTR))
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
