# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henri <henri@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/20 22:58:15 by henri             #+#    #+#              #
#    Updated: 2020/06/02 17:31:35 by henri            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serial

CPP = clang++ -Wall -Wextra -Werror

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	@$(CPP) -c $< -o $@

$(NAME): $(OBJS)
	@$(CPP) $(OBJS) -o $(NAME)

x:	$(NAME)
	@./serial

fclean:
	rm -f $(NAME)
	rm -f $(OBJS)

re: fclean $(NAME)

.PHONY: re fclean
