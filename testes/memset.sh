if [ $(whoami) = "gabriel" ]
then
    gcc memset.c ../libft.h ../ft_memset.c ../ft_bzero.c -o main
else
    gcc memset.c ../libft.h ../ft_memset.c ../ft_bzero.c
fi