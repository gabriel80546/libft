
funcao="strtrim"

if [ $(whoami) = "gabriel" ]
then
    gcc $funcao.c ../libft.h ../sources/ft_$funcao.c ../sources/ft_strchr.c ../sources/ft_strlen.c ../sources/ft_substr.c -o main
else
    gcc $funcao.c ../libft.h ../sources/ft_$funcao.c ../sources/ft_strchr.c ../sources/ft_strlen.c ../sources/ft_substr.c
fi
