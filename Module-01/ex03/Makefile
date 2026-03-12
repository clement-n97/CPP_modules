# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/12 09:15:48 by clnicola          #+#    #+#              #
#    Updated: 2026/03/12 10:00:22 by clnicola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp\
	HumanA.cpp\
	HumanB.cpp\
	Weapon.cpp

OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = Attacks

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re