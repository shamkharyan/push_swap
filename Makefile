# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 18:44:30 by pshamkha          #+#    #+#              #
#    Updated: 2024/04/07 15:31:50 by pshamkha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker

FLAGS = -Wall -Werror -Wextra

FT_PRINTF_DIR = ft_printf/
FT_PRINTF_NAME = libftprintf.a
FT_PRINTF = $(FT_PRINTF_DIR)$(FT_PRINTF_NAME)

SRCS = \
       check_elems.c \
	   get_elems.c \
	   cheapest_index.c \
	   itos.c \
	   sort_offset.c \
	   main.c \
	   rotate.c \
	   sort.c \
	   st_clear.c \
       st_create.c \
       st_get.c \
	   st_max_ind.c \
	   st_min_ind.c \
       st_new.c \
       st_pop_top.c \
       st_print.c \
       st_push_top.c \
	   st_push.c \
	   st_rot.c \
	   st_rrot.c \
	   st_size.c \
	   st_swap.c \
	   targets.c \

SRCS_BONUS = \
		check_elems.c \
		get_elems.c \
		sort_offset.c \
		st_create.c \
		st_clear.c \
		st_pop_top.c \
		st_push_top.c \
		st_min_ind.c \
		st_new.c \
		st_push.c \
		st_rot.c \
		st_rrot.c \
		st_swap.c \
		get_next_line.c \
		checker.c \

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

HEADERS = \
		check_input.h \
		stack.h \
		sort.h \
		get_next_line.h \
		checker.h \

all: $(NAME)

bonus: $(NAME) $(NAME_BONUS)

$(NAME): $(OBJS)
	make -C $(FT_PRINTF_DIR)
	cc $(OBJS) -o $(NAME) $(FT_PRINTF)

$(NAME_BONUS): $(OBJS_BONUS)
	make -C $(FT_PRINTF_DIR)
	cc $(OBJS_BONUS) -o $(NAME_BONUS) $(FT_PRINTF)

%.o: %.c $(HEADERS)
	cc $(CFLAGS) -c $< -o $@

clean:
	make -C $(FT_PRINTF_DIR) clean
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	make -C $(FT_PRINTF_DIR) fclean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all bonus clean fclean re
