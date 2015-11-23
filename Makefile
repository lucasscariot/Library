NAME = LibFt

SRC =	src/*.c \
		*.c
all:
	gcc -Wall -Werror -Wextra -I./ -o $(NAME) $(SRC)

clean :
	/bin/rm -rf $(NAME)
	/bin/rm -rf *.swp
re :
	clean
	all
