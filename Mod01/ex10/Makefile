# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henri <henri@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/05 23:07:16 by henri             #+#    #+#              #
#    Updated: 2020/04/06 23:46:44 by henri            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cato9tails
CPP = clang++ -Wall -Wextra -Werror
SRCS = main.cpp Cat.cpp
OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	@$(CPP) -c $< -o $@

$(NAME): $(OBJS)
	@$(CPP) $(OBJS) -o $(NAME)

x: $(NAME)
	 @./$(NAME)

fclean:
	rm -f $(NAME)
	rm -f $(OBJS)

re: fclean $(NAME)

.PHONY: re fclean
