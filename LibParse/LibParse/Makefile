CC	=	gcc

CFLAGS	=	-W -Wall -Werror -ansi -pedantic

NAME	=	libparse

SRC	=	add_argument.c\
                add_option.c\
                my_putchar.c\
		my_strcmp.c\
                parse_option.c\
		test_parse_option.c\


OBJ	=	$(SRC:%.c=%.o)

RM	=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all