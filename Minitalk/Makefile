# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 02:35:29 by ojebbari          #+#    #+#              #
#    Updated: 2023/12/11 19:23:50 by ojebbari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = ./Mandatory/server.o
OBJC =  ./Mandatory/client.o
NAMES = ./Mandatory/server
NAMEC = ./Mandatory/client
CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f
CBNS = ./Bonus/client_bonus.o
SBNS = ./Bonus/server_bonus.o

all: $(NAMES) $(NAMEC)

$(NAMES) : $(OBJS)
	@cd libft && make
	@cd ft_printf && make
	@$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a ./ft_printf/libftprintf.a -o $(NAMES)

$(NAMEC) : $(OBJC)
	@$(CC) $(CFLAGS) $(OBJC) ./libft/libft.a ./ft_printf/libftprintf.a -o $(NAMEC)

bonus : $(CBNS) $(SBNS)
		@cd libft && make
		@cd ft_printf && make
		@$(CC) $(CFLAGS) $(CBNS) ./libft/libft.a ./ft_printf/libftprintf.a -o $(NAMEC)
		@$(CC) $(CFLAGS) $(SBNS) ./libft/libft.a ./ft_printf/libftprintf.a -o $(NAMES)

$(OBJS): ./Mandatory/minitalk.h
$(OBJC): ./Mandatory/minitalk.h
$(SBNS): ./Bonus/minitalk_bonus.h
$(CBNS): ./Bonus/minitalk_bonus.h

clean :
	@cd libft && make clean
	@cd ft_printf && make clean
	@$(RM) $(OBJC)
	@$(RM) $(OBJS)

fclean : clean
	@cd libft && make fclean
	@cd ft_printf && make fclean
	@$(RM) $(NAMES)
	@$(RM) $(NAMEC)
	@$(RM) $(SBNS)
	@$(RM) $(CBNS)

re : fclean all