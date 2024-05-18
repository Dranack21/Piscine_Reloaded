# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: habouda <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 14:20:03 by habouda           #+#    #+#              #
#    Updated: 2024/05/18 17:20:13 by habouda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

### SRC ########################################################################

OBJS = $(SRCS:.c=.o)

SRCS = ./srcs/ft_putstr.c  ./srcs/ft_strcmp.c  ./srcs/ft_strlen.c ./srcs/ft_swap.c  ./srcs/ft_putchar.c 

HEADER = ./includes/

### REGLES ######################################################################

NAME = libft.a

all: $(NAME) 

$(NAME) : $(OBJS)
	ar rcs  $(NAME) $(OBJS) 

clean:
	rm -f $(OBJS)

.c.o:
		${CC} ${CFLAGS} -c -I ${HEADER} $< -o $@
		
fclean: 
	rm -f $(NAME) $(OBJS)

re: fclean all
	
.PHONY: all clean fclean re