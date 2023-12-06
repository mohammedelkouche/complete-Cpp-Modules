# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 17:30:43 by mel-kouc          #+#    #+#              #
#    Updated: 2023/12/03 17:30:43 by mel-kouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

SRC = main.cpp  AMateria.cpp Ice.cpp Cure.cpp

HEADER =  AMateria.hpp Ice.hpp Cure.hpp
OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

