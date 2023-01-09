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
SRCS		= ft_atoi.c ft_isalpha.c ft_isprint.c ft_memccpy.c ft_memcpy.c ft_memset.c ft_putnbr.c ft_strchr.c ft_strcpy.c ft_strequ.c ft_strlcat.c ft_strncmp.c ft_strnew.c ft_strstr.c ft_bzero.c ft_isascii.c ft_itoa.c ft_memchr.c ft_memdel.c ft_putchar.c ft_putstr.c ft_strclr.c ft_strdel.c ft_striter.c  ft_strlen.c ft_strncpy.c ft_strnstr.c ft_tolower.c ft_isalnum.c ft_isdigit.c ft_memalloc.c ft_memcmp.c ft_memmove.c ft_putendl.c ft_strcat.c ft_strcmp.c ft_strdup.c ft_striteri.c ft_strncat.c ft_strnequ.c ft_strrchr.c ft_toupper.c ft_strtrim.c ft_strsub.c ft_strjoin.c ft_split.c


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

