# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henri <henri@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/20 22:58:15 by henri             #+#    #+#              #
#    Updated: 2020/04/22 15:53:34 by henri            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CPP = clang++ -Wall -Wextra -Werror

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	@$(CPP) -c $< -o $@

$(NAME): $(OBJS)
	@$(CPP) $(OBJS) -o $(NAME)

x: $(NAME)
	@ echo "\n./convert 0\n"
	@./convert 0

	@ echo "\n./convert nan\n"
	@./convert nan

	@ echo "\n./convert 42.0f\n"
	@./convert 42.0f

	@ echo "\n./convert inf\n"
	@./convert inf

	@ echo "\n./convert -inf\n"
	@./convert -inf

	@ echo "\n./convert +inf\n"
	@./convert +inf

	@ echo "\n./convert nanf\n"
	@./convert nanf

	@ echo "\n./convert nan\n"
	@./convert nan

	@ echo "\n./convert 10\n"
	@./convert 10

	@ echo "\n./convert -42\n"
	@./convert -42

	@ echo "\n./convert 100000\n"
	@./convert 100000

fclean:
	rm -f $(NAME)
	rm -f $(OBJS)

re: fclean $(NAME)

.PHONY: re fclean
