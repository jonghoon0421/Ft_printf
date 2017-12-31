# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonkim <jonkim@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/20 13:20:27 by jonkim            #+#    #+#              #
#    Updated: 2017/12/30 18:53:18 by jonkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_check.c           \
	  ft_init.c            \
	  ft_printf.c          \
	  ft_set_i.c           \
	  ft_set_xi.c          \
	  ft_work_int.c        \
	  ft_work_xint.c       \
	  ft_work_uint.c       \
	  ft_work_wchr.c       \
	  ft_work_wstr.c       \
	  ft_set_lcs.c         \
	  ft_set_ls_subfunc.c  \
	  ft_set_ptraddr.c     \
	  ft_set_percent.c     \
	  ft_set_general.c     \
	  ft_set_wcs.c         \
	  ft_asterisk.c        \
	  libft_func1.c        \
	  libft_func2.c        \
	  libft_func3.c        \
	  libft_func4.c        \
	  libft_func5.c

OBJ = $(SRC:.c=.o)

SRC_DIR = srcs
OBJ_DIR = objs

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
OBJS = $(addprefix $(OBJ_DIR)/, $(OBJ))

WFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re
.SUFFIXES: .c .o

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@/bin/mkdir -p $(OBJ_DIR)
	@gcc -c $(WFLAGS) -I includes $< -o $@

$(NAME): $(OBJS)
	@ar rcs $@ $^
	@ranlib $@

clean:
	@/bin/rm -rf $(OBJ_DIR)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
