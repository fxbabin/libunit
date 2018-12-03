# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 22:51:42 by fbabin            #+#    #+#              #
#    Updated: 2018/12/02 23:39:40 by bleplat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	check_libft

CC				=	clang
CFLAGS			=	-Wall -Wextra

_SRCS_M			=	main.c

_SRCS_MEMSET	=	00_memset_launcher.c 01_memset_simple_1.c 02_memset_tab.c  \
					03_memset_newline.c  04_memset_zero.c  05_memset_space.c  \
					06_memset_null.c

_SRCS_BZERO	    =   00_bzero_launcher.c 01_bzero_simple_1.c 02_bzero_zero.c 03_bzero_null.c

_SRCS_MEMCPY	=   00_memcpy_launcher.c 01_memcpy_simple_1.c 02_memcpy_simple_2.c 03_memcpy_null_1.c   04_memcpy_null_2.c

_SRCS_PUTSTR    =   00_putstr_launcher.c 01_putstr_simple_1.c 02_putstr_null.c 03_putstr_zeros.c

_SRCS_PUTNBR    =   00_putnbr_launcher.c 01_putnbr_int_min.c 02_putnbr_m_20.c 03_putnbr_zero.c 04_putnbr_one.c 05_putnbr_p_20.c 06_putnbr_int_max.c

_SRCS_ATOI		=	00_ft_atoi_launcher.c 01_ft_atoi_positive_digit.c \
					02_ft_atoi_negative_digit.c 03_ft_atoi_positive_number.c \
					04_ft_atoi_negative_number.c 05_ft_atoi_maximum.c 06_ft_atoi_minimum.c \
					07_ft_atoi_zero.c 08_ft_atoi_several_zeros.c 09_ft_atoi_not_number.c \
					10_ft_atoi_starting_spaces.c 11_ft_atoi_ending_spaces.c \
					12_ft_atoi_letter_at_middle.c 13_ft_atoi_minus_minus.c \
					14_ft_atoi_minus_add.c 15_ft_atoi_add_minus.c 16_ft_atoi_spaces_only.c \
					17_ft_atoi_spaces_before_minimum.c 18_ft_atoi_letter_after_minimum.c \
					19_ft_atoi_overflow.c 20_ft_atoi_empty_string.c 21_ft_atoi_minus.c

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
SRCS_PUTSTR		= ft_putstr
SRCS_PUTNBR		= ft_putnbr
SRCS_ATOI		= ft_atoi
LIBUNIT_DIR		= ../framework
LIBFT_DIR		= libft
SRCS			= $(addprefix $(SRCS_DIR)/, $(_SRCS_M))
SRCS			+= $(addprefix $(SRCS_MEMSET)/, $(_SRCS_MEMSET))
SRCS			+= $(addprefix $(SRCS_BZERO)/, $(_SRCS_BZERO))
SRCS			+= $(addprefix $(SRCS_MEMCPY)/, $(_SRCS_MEMCPY))
SRCS			+= $(addprefix $(SRCS_PUTSTR)/, $(_SRCS_PUTSTR))
SRCS			+= $(addprefix $(SRCS_PUTNBR)/, $(_SRCS_PUTNBR))
SRCS			+= $(addprefix $(SRCS_ATOI)/, $(_SRCS_ATOI))
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
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIBUNIT_DIR) -lunit -L$(LIBFT_DIR) -lft  -I $(HEADER_DIR) -I $(LHEADER_DIR)
		@echo "$(NAME) : $(_GREEN)Done$(_END)"

$(LIBUNIT):
		@make -C $(LIBUNIT_DIR)

$(LIBFT):
		@make -C $(LIBFT_DIR)

%.o : %.c
		$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_DIR) -I $(LHEADER_DIR)

test: $(NAME)
		@./$(NAME)

clean:
		make fclean -C $(LIBUNIT_DIR)
		make fclean -C $(LIBFT_DIR)
		/bin/rm -f $(OBJS)
		@echo "$(NAME) clean : $(_GREEN)Done$(_END)"

fclean: clean
		/bin/rm -f $(NAME)
		@echo "$(NAME) fclean : $(_GREEN)Done$(_END)"

re:
		@make fclean
		@make

.PHONY: all clean fclean re
