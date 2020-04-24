# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henri <henri@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/20 22:58:15 by henri             #+#    #+#              #
#    Updated: 2020/04/24 23:35:02 by henri            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

CPP = clang++ -Wall -Wextra -Werror

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	@$(CPP) -c $< -o $@

$(NAME): $(OBJS)
	@$(CPP) $(OBJS) -o $(NAME)

x:	$(NAME)
	@./array

fclean:
	rm -f $(NAME)
	rm -f $(OBJS)

re: fclean $(NAME)

.PHONY: re fclean
