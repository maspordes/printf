CC	=	cc
CFLAGS	=	-Wall	-Wextra	-Werror	-g	-I.

NAME	=	libftprintf.a
SRC	=	ft_printf.c	handling_char.c	handling_hexa.c	handling_int.c	\
		handling_pointer.c	handling_string.c	handling_unsigned.c	\
		utilities.c
OBJ	=	$(SRC:.c=.o)

all:	$(NAME)
$(NAME):	$(OBJ)
	ar	rcs	$(NAME) $(OBJ)

clean:
	rm	-f	$(OBJ)

fclean: clean
	rm	-f	$(NAME)

re:	fclean	all
