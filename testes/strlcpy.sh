if [ $(whoami) = "gabriel" ]
then
    gcc strlcpy.c ../libft.h ../ft_strlcpy.c -o main
else
    gcc strlcpy.c ../libft.h ../ft_strlcpy.c
fi