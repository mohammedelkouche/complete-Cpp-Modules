# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 10:08:52 by mel-kouc          #+#    #+#              #
#    Updated: 2024/02/15 22:45:56 by mel-kouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScalarConverter

SRC = main.cpp Base.cpp

HEADER = Base.hpp A.hpp B.hpp C.hpp

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