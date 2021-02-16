
funcao="split"

if [ $(whoami) = "gabriel" ]
then
    gcc $funcao.c ../libft.h ../ft_$funcao.c ../ft_strlen.c ../ft_calloc.c ../ft_memset.c -o main
else
    gcc $funcao.c ../libft.h ../ft_$funcao.c ../ft_strlen.c ../ft_calloc.c ../ft_memset.c
fi
