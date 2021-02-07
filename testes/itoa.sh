
funcao="itoa"

if [ $(whoami) = "gabriel" ]
then
    gcc $funcao.c ../libft.h ../sources/ft_$funcao.c ../sources/ft_strlcpy.c -o main
else
    gcc $funcao.c ../libft.h ../sources/ft_$funcao.c ../sources/ft_strlcpy.c
fi
