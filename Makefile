# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/24 00:05:27 by hkemmoun          #+#    #+#              #
#    Updated: 2024/11/26 06:30:18 by hkemmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c print_char.c print_nbr.c print_str.c print_hex.c print_unsigned.c print_address.c main.c
OBJ = $(SRC:.c=.o)
EXE = a.out

all: $(NAME) $(EXE)

$(NAME): $(OBJ)
	@ar rcs $@ $(OBJ)

%.o: %.c
	@$(CC) -c $(CFLAGS) $< -o $@

$(EXE): $(SRC)
	@$(CC) $(CFLAGS) $^ -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) $(EXE)

re: fclean all
