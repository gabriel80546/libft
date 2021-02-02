# Define required macros here
SHELL = /bin/sh

OBJS =  main.o
CFLAG = -Wall -Wextra -Werror
CC = gcc
#INCLUDE =
#LIBS = -lm

all:
	${CC} main.c ft_memset.c ${CFLAGS} -o main
# clean:
#    -rm -f *.o core *.core

# .cpp.o:
#    ${CC} ${CFLAGS} ${INCLUDES} -c $<
