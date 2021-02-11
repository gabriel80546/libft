
funcao="substr"

if [ $(whoami) = "gabriel" ]
then
    gcc -O2 -funroll-loops -Werror -Wall -Wextra $funcao.c ../libft.h ../sources/ft_$funcao.c ../sources/ft_strlen.c -o main
else
    gcc -O2 -funroll-loops -Werror -Wall -Wextra $funcao.c ../libft.h ../sources/ft_$funcao.c ../sources/ft_strlen.c
fi
