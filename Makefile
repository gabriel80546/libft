# Define required macros here

CFLAG = -Wall -Wextra -Werror
CC = gcc
CAMINHO = sources/*.c

$(NAME):
	${CC} -c ${CFLAGS} libft.h sources/$(NAME)
	ar -rc libft.a sources/$(NAME:.c=.o)
all:
	${CC} -c ${CFLAGS} libft.h ${CAMINHO}
	ar -rc libft.a *.o
clean:
	rm -f -- sources/*.o
	rm -f -- libft.h.gch
fclean:
	rm -f -- sources/*.o
	rm -f -- libft.h.gch
re:
	rm -f -- *.o libft.a
	rm -f -- libft.h.gch
	pwd
	ls -l
	echo "CAMINHO = ${CAMINHO}"
	${CC} -c ${CFLAGS} libft.h ${CAMINHO}
	ar -rc libft.a *.o
so:
	$(CC) -fPIC $(CFLAGS) *.c
	gcc -shared -o libft.so *.o
