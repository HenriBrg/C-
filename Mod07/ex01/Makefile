# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henri <henri@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/20 22:58:15 by henri             #+#    #+#              #
#    Updated: 2020/04/23 23:19:40 by henri            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CPP = clang++ -Wall -Wextra -Werror

SRCS = iter.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	@$(CPP) -c $< -o $@

$(NAME): $(OBJS)
	@$(CPP) $(OBJS) -o $(NAME)

x:	$(NAME)
	@./iter

fclean:
	rm -f $(NAME)
	rm -f $(OBJS)

re: fclean $(NAME)

.PHONY: re fclean
