# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/14 05:48:46 by nsavry            #+#    #+#              #
#    Updated: 2013/12/19 15:55:06 by nsavry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FTC = ft_printf.c\
	  ft_current_one.c\
	  ft_current_two.c

FTO = $(subst .c,.o,$(FTC))

.PHONY: all re clean fclean

all: $(NAME)

$(NAME): $(FTO)
	ar rc $(NAME) $(FTO)
	ranlib $(NAME)


%.o: %.c
	gcc -Wall -Werror -Wextra -I./includes -c $<

clean:
	rm -rf $(FTO)

fclean: clean
	rm -rf $(NAME)

re: fclean all
