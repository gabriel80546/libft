if [ $(whoami) = "gabriel" ]
then
    gcc memmove.c ../libft.h ../ft_memset.c ../ft_bzero.c ../ft_memcpy.c ../ft_memccpy.c ../ft_memmove.c -o main
else
    gcc memmove.c ../libft.h ../ft_memset.c ../ft_bzero.c ../ft_memcpy.c ../ft_memccpy.c ../ft_memmove.c
fi