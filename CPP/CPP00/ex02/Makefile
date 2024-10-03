# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miturk <miturk@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/03 14:47:15 by miturk            #+#    #+#              #
#    Updated: 2024/10/03 14:47:38 by miturk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
AR = ar rcs
RM = rm -f

SRC = Account.cpp

OBJ = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} -o ${NAME} $^

%.o: %.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}

re: clean all

.PHONY: all clean fclean re