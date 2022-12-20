# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naomi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 16:33:50 by naomi             #+#    #+#              #
#    Updated: 2022/12/19 23:39:09 by naomi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
SRCSDIR		= srcs
OBJSDIR		= objs
INCLUDES	= incs
SRCS		= ft_itoa.c ft_memdel.c ft_putchar.c ft_putendl.c ft_putnbr.c ft_putstr.c ft_strclr.c ft_strdel.c ft_strequ.c ft_striter.c ft_striteri.c ft_strnequ.c ft_strnew.c

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

OBJS		= $(SRCS:%.c=$(OBJSDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Linking $@"
	@ar rc $(NAME) $(OBJS)
	@echo "Done!"

$(OBJS): $(OBJSDIR)/%.o: $(SRCSDIR)/%.c
	@mkdir -p $(@D)
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJSDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: all
	./$(NAME)

.PHONY: all clean fclean re test

