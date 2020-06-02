# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: henri <henri@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/20 22:58:15 by henri             #+#    #+#              #
#    Updated: 2020/06/02 16:24:37 by henri            ###   ########.fr        #
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

	@ echo "\n./convert 42\n"
	@./convert 42

	@ echo "\n./convert -42\n"
	@./convert -42

	@ echo "\n./convert 0.0f\n"
	@./convert 0.0f

	@ echo "\n./convert 4.2f\n"
	@./convert 4.2f

	@ echo "\n./convert -4.2f\n"
	@./convert -4.2f


	@ echo "\n./convert -inff\n"
	@./convert -inff

	@ echo "\n./convert +inff\n"
	@./convert +inff

	@ echo "\n./convert nanf\n"
	@./convert nanf

	@ echo "\n./convert 0.0\n"
	@./convert 0.0f

	@ echo "\n./convert 4.2\n"
	@./convert 4.2

	@ echo "\n./convert -4.2\n"
	@./convert -4.2

	@ echo "\n./convert -inf\n"
	@./convert -inf

	@ echo "\n./convert +inf\n"
	@./convert +inf

	@ echo "\n./convert nan\n"
	@./convert nan

fclean:
	rm -f $(NAME)
	rm -f $(OBJS)

re: fclean $(NAME)

.PHONY: re fclean
