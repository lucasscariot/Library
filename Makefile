NAME = LibFt

SRC =	src/*.c \
		*.c
all:
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean :
	/bin/rm -rf $(NAME)
	/bin/rm -rf *.swp
re :
	clean
	all
