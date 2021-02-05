
funcao="strlcat"

if [ $(whoami) = "gabriel" ]
then
    gcc $funcao.c ../libft.h ../sources/ft_$funcao.c -w -lbsd -o main
else
    gcc $funcao.c ../libft.h ../sources/ft_$funcao.c
fi
