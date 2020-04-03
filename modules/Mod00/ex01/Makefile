# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henri <henri@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/02 12:13:05 by henri             #+#    #+#              #
#    Updated: 2020/04/03 12:04:59 by henri            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = myAwesomePhoneBook
CPP = clang++ -Wall -Wextra -Werror -fsanitize=address
SRCS = main.cpp PhoneBook.cpp Contact.cpp
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
