# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selveren <selveren@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/24 20:10:49 by jaeskim           #+#    #+#              #
#    Updated: 2022/10/22 15:56:05 by selveren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror

SRCS := $(wildcard *.c)
SRCS := $(filter-out ft_lst%.c, $(SRCS))
OBJS := $(SRCS:.c=.o)

BONUS_SRCS := $(wildcard ft_lst*.c)
BONUS_OBJS := $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
