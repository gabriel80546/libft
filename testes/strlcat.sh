
funcao="strlcat"

if [ $(whoami) = "gabriel" ]
then
    gcc $funcao.c ../libft.h ../ft_$funcao.c ../ft_strlen.c -w -lbsd -o main
else
    gcc $funcao.c ../libft.h ../ft_$funcao.c ../ft_strlen.c
fi
