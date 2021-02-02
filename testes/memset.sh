if [ $(whoami) = "gabriel" ]
then
    gcc bzero.c ../libft.h ../ft_memset.c ../ft_bzero.c -o main
else
    gcc bzero.c ../libft.h ../ft_memset.c ../ft_bzero.c
fi