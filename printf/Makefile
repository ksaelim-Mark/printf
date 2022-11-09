# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksaelim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 14:31:53 by ksaelim           #+#    #+#              #
#    Updated: 2022/06/22 14:12:11 by ksaelim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS	= -Wall -Werror -Wextra

SRCS	= ft_printf.c \
	  csdiu.c \
	  px.c

OBJS	= $(SRCS:.c=.o)
NAME	= libftprintf.a 

%o : %c
	gcc $(FLAGS) -Ilibft -c $< -o $@

$(NAME): $(OBJS)
	make -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean: 
	rm -rf $(OBJS)
	make clean -C libft

fclean:	clean
	rm -rf $(NAME)
	make fclean -C libft

re: fclean all

.PHONY:	all clean fclean re bonus
