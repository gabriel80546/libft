
funcao="strnstr"

if [ $(whoami) = "gabriel" ]
then
    gcc $funcao.c ../libft.h ../sources/ft_$funcao.c -lbsd -o main
else
    gcc $funcao.c ../libft.h ../sources/ft_$funcao.c
fi
