# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 17:25:14 by ojebbari          #+#    #+#              #
#    Updated: 2023/04/12 01:53:24 by ojebbari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putstr_fd.c \
ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_split.c ft_strchr.c ft_strdup.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_strtrim.c ft_tolower.c ft_toupper.c  ft_bzero.c \
ft_atoi.c ft_strlen.c ft_substr.c ft_putchar_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_striteri.c
SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
ft_lstadd_back.c ft_lstlast.c
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)

%.o: %.c libft.h
		cc $(CFLAGS) -c -o $@ $<
$(NAME) : $(OBJS)
		ar rc $(NAME) $(OBJS)
clean :
		rm -rf $(OBJS) $(OBJS_BONUS)
fclean : clean
		rm -rf $(NAME)
bonus : $(OBJS_BONUS)
		ar rc $(NAME) $(OBJS_BONUS)
re : fclean all