if [ $(whoami) = "gabriel" ]
then
    gcc memchr.c ../libft.h ../ft_memset.c ../ft_bzero.c ../ft_memcpy.c ../ft_memccpy.c ../ft_memmove.c ../ft_memchr.c -o main
else
    gcc memchr.c ../libft.h ../ft_memset.c ../ft_bzero.c ../ft_memcpy.c ../ft_memccpy.c ../ft_memmove.c ../ft_memchr.c
fi