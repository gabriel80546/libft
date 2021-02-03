if [ $(whoami) = "gabriel" ]
then
    gcc memccpy.c ../libft.h ../ft_memset.c ../ft_bzero.c ../ft_memcpy.c ../ft_memccpy.c -o main
else
    gcc memccpy.c ../libft.h ../ft_memset.c ../ft_bzero.c ../ft_memcpy.c ../ft_memccpy.c
fi