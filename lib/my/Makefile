##
## EPITECH PROJECT, 2019
## make
## File description:
## files
##

SRC	=	my_putchar.c			\
		my_putstr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
clean:
		rm -rf *.o

fclean:		clean

