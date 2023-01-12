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
SRCSBDIR	= srcsb
OBJSDIR		= objs
OBJSBDIR	= objsb
INCLUDES	= incs
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c     ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c      ft_strdup.c ft_substr.c ft_strlcpy.c ft_calloc.c ft_strtrim.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCSB		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c


CC			= cc
CFLAGS		= -Wall -Wextra -Werror

OBJS		= $(SRCS:%.c=$(OBJSDIR)/%.o)
OBJSB		= $(SRCSB:%.c=$(OBJSBDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	
bonus: $(OBJSB)
	@ar rc $(NAME) $(OBJSB)

$(OBJS): $(OBJSDIR)/%.o: $(SRCSDIR)/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@
	
$(OBJSB): $(OBJSBDIR)/%.o: $(SRCSBDIR)/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJSDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: all
	./$(NAME)

.PHONY: all clean fclean re test

