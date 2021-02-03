if [ $(whoami) = "gabriel" ]
then
    gcc strlen.c ../libft.h ../ft_strlen.c -o main
else
    gcc strlen.c ../libft.h ../ft_strlen.c
fi