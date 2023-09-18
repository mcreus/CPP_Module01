NAME	=	harlFilter

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	Harl.cpp main.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
		@echo "\033[0;33mCOMPILING HARL2.0\n"
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[1;32m\nCOMPILATION REUSSIE\n"


clean:
		@echo "\033[0;31m\nDELETING OBJS\n"
		rm -rf $(OBJS)
		@echo "\033[1;32m\nDONE\n"

fclean: clean
		@echo "\033[0;31m\nDELETING HARL2.0\n"
		rm -rf $(NAME)
		@echo "\033[1;32m\nDONE\n"

re: fclean all