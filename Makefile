# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfelix-d <vfelix-d@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/13 20:08:42 by vfelix-d          #+#    #+#              #
#    Updated: 2024/10/13 20:09:19 by vfelix-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = libft.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all                                           
