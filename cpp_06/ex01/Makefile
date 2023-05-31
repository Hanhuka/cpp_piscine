# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 11:20:57 by ralves-g          #+#    #+#              #
#    Updated: 2023/05/31 17:42:58 by ralves-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX 		= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 #-g #-fsanitize=address

RM			= rm -f

NAME		= Serializer

INCLUDE		= -I ./

SRCS		= Data.cpp Serializer.cpp main.cpp

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(SRCS) $(INCLUDE) -c
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) $(INCLUDE)

clean:
			$(RM) -r $(OBJS)

fclean :	clean
			$(RM) $(NAME)

re:			fclean all