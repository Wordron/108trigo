##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC    =	main.c	\
			matrixes_product.c 	\
			elemantary_operations.c	\
			get_mat.c 	\
			do_function.c	\

OBJ    =    $(SRC:.c=.o)

NAME	=	108trigo

##CFLAGS = -Wall -Wshadow -Wextra -I./include -g

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -lm

clean:
		rm $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all

git:
	echo -e "*.a\n*.o\n*#*#*\n*~\n#*" > .gitignore
	echo $(NAME) >> .gitignore
