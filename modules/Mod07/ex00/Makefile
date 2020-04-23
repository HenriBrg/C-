# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henri <henri@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/20 22:58:15 by henri             #+#    #+#              #
#    Updated: 2020/04/23 18:11:56 by henri            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = wh

CPP = clang++ -Wall -Wextra -Werror

SRCS = whatever.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	@$(CPP) -c $< -o $@

$(NAME): $(OBJS)
	@$(CPP) $(OBJS) -o $(NAME)

x:	$(NAME)
	@./wh

fclean:
	rm -f $(NAME)
	rm -f $(OBJS)

re: fclean $(NAME)

.PHONY: re fclean
