# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pavon <pavon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/07 18:01:15 by dpavon-g          #+#    #+#              #
#    Updated: 2021/05/23 21:25:08 by pavon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a

SRCS = 	ft_printf.c\
		flags.c\
		show.c\
		types.c\
		aux_functions.c

BONUSRCS =	ft_printf_bonus.c\
			flags_bonus.c\
			show_bonus.c\
			types_bonus.c\
			aux_functions_bonus.c

OBJECTS = $(SRCS:.c=.o)
OBJECTSBONUS = $(BONUSRCS:.c=.o)
LIB_PATH = libft/
LIB_NAME = $(LIB_PATH)libft.a
INCLUDES = -I. -I$(LIB_PATH)
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

all: $(NAME)

$(NAME): $(OBJECTS)
	@make -C $(LIB_PATH)
	cp $(LIB_NAME) $(NAME)
	@$(CC) -g3 $(CFLAGS) -c $(SRCS) $(INCLUDES)
	@ar rcs $(NAME) $(OBJECTS)

clean:
	@make -C $(LIB_PATH) clean
	@rm -f $(OBJECTS)
	@rm -f $(OBJECTSBONUS)

fclean: clean
	@make -C $(LIB_PATH) fclean
	@rm -f $(NAME)

re: fclean all
bonus: $(OBJECTSBONUS)
	@make -C $(LIB_PATH)
	cp $(LIB_NAME) $(NAME)
	@$(CC) -g3 $(CFLAGS) -c $(BONUSRCS) $(INCLUDES)
	@ar rcs $(NAME) $(OBJECTSBONUS)

.PHONY:	all clean fclean re
