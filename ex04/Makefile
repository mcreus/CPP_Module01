NAME	=	replace

CC		=	c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp
OBJS	=	$(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
		@echo "\033[0;33mCOMPILING REPLACE\n"
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[1;32mSUCCES\n"

clean:
		@echo "\033[0;31mDELETING OBJS\n"
		rm -rf $(OBJS)
		@echo "\033[1;32mDONE\n"

fclean: clean
		@echo "\033[0;31mDELETING ALL\n"
		rm -rf $(NAME)
		@echo "\033[1;32mDONE\n"

re: all