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

NAME			=	check_libft

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra

_SRCS_M			=	main.c

_SRCS_MEMSET	=	00_memset_launcher.c 01_memset_simple_1.c 02_memset_tab.c  \
					03_memset_newline.c  04_memset_zero.c  05_memset_space.c  \
					06_memset_null.c

_SRCS_BZERO	    =   00_bzero_launcher.c 01_bzero_simple_1.c 02_bzero_zero.c 03_bzero_null.c

_SRCS_MEMCPY	=   00_memcpy_launcher.c 01_memcpy_simple_1.c 02_memcpy_simple_2.c 03_memcpy_null_1.c   04_memcpy_null_2.c

_SRCS_PUTSTR    =   00_putstr_launcher.c 01_putstr_simple_1.c 02_putstr_null.c 03_putstr_zeros.c

_SRCS_PUTNBR    =   00_putnbr_launcher.c 01_putnbr_int_min.c 02_putnbr_m_20.c 03_putnbr_zero.c 04_putnbr_one.c 05_putnbr_p_20.c 06_putnbr_int_max.c

_LIBUNIT		=	libunit.a
_LIBFT			=	libft.a
HEADER_DIR		=	../framework/includes
HEADER			=	$(HEADER_DIR)/libunit.h

LHEADER_DIR		=	libft/includes
LHEADER			=	$(LHEADER_DIR)/libft.h

SRCS_DIR		= .
SRCS_MEMSET		= ft_memset
SRCS_BZERO		= ft_bzero
SRCS_MEMCPY		= ft_memcpy
SRCS_PUTSTR     = ft_putstr
SRCS_PUTNBR     = ft_putnbr
LIBUNIT_DIR		= ../framework
LIBFT_DIR		= libft
SRCS			= $(addprefix $(SRCS_DIR)/, $(_SRCS_M))
SRCS			+= $(addprefix $(SRCS_MEMSET)/, $(_SRCS_MEMSET))
SRCS			+= $(addprefix $(SRCS_BZERO)/, $(_SRCS_BZERO))
SRCS			+= $(addprefix $(SRCS_MEMCPY)/, $(_SRCS_MEMCPY))
SRCS			+= $(addprefix $(SRCS_PUTSTR)/, $(_SRCS_PUTSTR))
SRCS			+= $(addprefix $(SRCS_PUTNBR)/, $(_SRCS_PUTNBR))
LIBUNIT			= $(addprefix $(LIBUNIT_DIR)/, $(_LIBUNIT))
LIBFT			= $(addprefix $(LIBFT_DIR)/, $(_LIBFT))
OBJS			= $(SRCS:.c=.o)

#COLORS
_CYAN=\x1b[36m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_END=\x1b[0m

all: $(NAME)

$(NAME): $(HEADER) $(LHEADER) $(LIBUNIT) $(LIBFT) $(OBJS)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIBUNIT_DIR) -lunit -Llibft -lft  -I $(HEADER_DIR) -I $(LHEADER_DIR)
		@echo "$(NAME) : $(_GREEN)Done$(_END)"

$(LIBUNIT):
		@make -C $(LIBUNIT_DIR)

$(LIBFT):
		@make -C $(LIBFT_DIR)

%.o : %.c
		@$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_DIR) -I $(LHEADER_DIR)

test: $(NAME)
		@./$(NAME)

clean:
		@make fclean -C $(LIBUNIT_DIR)
		@make fclean -C $(LIBFT_DIR)
		@/bin/rm -f $(OBJS)
		@echo "$(NAME) clean : $(_GREEN)Done$(_END)"

fclean: clean
		@/bin/rm -f $(NAME)
		@echo "$(NAME) fclean : $(_GREEN)Done$(_END)"

re:
		@make fclean
		@make

.PHONY: all clean fclean re
