NAME	=	Zombie

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
rm		=	rm -rf

SRCS	=	Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
		@echo "\033[0;33m\nCOMPILATION Zombie\n"
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[1;32m\nCOMPILATION REUSSIE\n"


clean:
		@echo "\033[0;31m\nDELETING OBJS\n"
		rm -rf $(OBJS)
		@echo "\033[1;32m\nDONE\n"

fclean: clean
		@echo "\033[0;31m\nDELETING Zombie\n"
		rm -rf $(NAME)
		@echo "\033[1;32m\nDONE\n"

re: fclean all
