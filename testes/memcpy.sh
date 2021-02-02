if [ $(whoami) = "gabriel" ]
then
    gcc memcpy.c ../libft.h ../ft_memset.c ../ft_bzero.c ../ft_memcpy.c -o main
else
    gcc memcpy.c ../libft.h ../ft_memset.c ../ft_bzero.c ../ft_memcpy.c
fi