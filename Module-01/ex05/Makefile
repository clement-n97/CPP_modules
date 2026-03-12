# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/12 13:48:21 by clnicola          #+#    #+#              #
#    Updated: 2026/03/12 13:49:26 by clnicola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp\
	Harl.cpp\

OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = harl

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re