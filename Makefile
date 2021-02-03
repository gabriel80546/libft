# Define required macros here

CFLAG = -Wall -Wextra -Werror
CC = gcc

$(NAME):
	${CC} -c ${CFLAGS} libft.h sources/$(NAME)
	ar -rc libft.a sources/$(NAME:.c=.o)

all:
	${CC} -c ${CFLAGS} libft.h sources/*.c
	mv *.o sources/
	ar -rc libft.a sources/*.o
clean:
	rm -f -- sources/*.o
	rm -f -- libft.h.gch
fclean:
	rm -f -- sources/*.o
	rm -f -- libft.h.gch
re:
	rm -f -- *.o libft.a
	rm -f -- libft.h.gch
	${CC} -c ${CFLAGS} libft.h sources/*.c
	mv *.o sources/
	ar -rc libft.a sources/*.o
