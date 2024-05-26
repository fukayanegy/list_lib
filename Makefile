# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/26 19:55:02 by etakaham          #+#    #+#              #
#    Updated: 2024/05/26 19:55:02 by etakaham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all fclean re clean
NAME		= list_lib.a
CC			= CC
CFLAGS		= -Wall -Wextra -Werror
SRCS		= append.c free_list.c ft_sizeof.c init_list.c
OBJS		= $(SRCS:.c=.o)

MALLOC_DIR	= ./malloc_lib
MALLOC_LIB	= $(MALLOC_DIR)/malloc_lib.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):$(OBJS)
	make -C $(MALLOC_DIR)
	ar rcs $(NAME) $(OBJS) $(MALLOC_LIB)

clean:
	make clean -C $(MALLOC_DIR)
	rm -f $(OBJS)

fclean: clean
	make fclean -C $(MALLOC_DIR)
	rm -f $(NAME)

re: fclean all
