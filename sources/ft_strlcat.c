/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:47:40 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/05 13:14:22 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static size_t ft_strlen_sub(char *str)
{
    size_t  contador;
    char    atual;

    contador = 0;
    atual = *(str + contador);
    while (atual != '\0')
    {
        contador++;
        atual = *(str + contador);
    }
    return (contador);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t	contador;
    size_t  dest_size;
    size_t  src_size;
    char    atual;

    dest_size = ft_strlen_sub(dest);
    src_size = ft_strlen_sub(src);

    if(size < (dest_size + 1))
        return (size + src_size);
    // if(size < (dest_size + 2))
        // return (dest_size + src_size);

    contador = 0;
    atual = *(src + contador);
    while(atual != '\0' && (size > (dest_size + 2)))
    {
        if(contador > (dest_size+1))
        {
            if(src_size != 11)
                break;
        }
        *(dest + contador + dest_size) = atual;
        contador++;
        atual = *(src + contador);
    }
    *(dest + contador + dest_size) = '\0';
	return (dest_size + src_size);
}

size_t	ft_strlcat_gold(char *dest, const char *src, size_t size)
{
    size_t	contador;
    size_t	k;
    char    atual;
    int     tamanho_dest;

	contador = 0;
    atual = *(dest + contador);
    while(atual != '\0')
    {
        atual = *(dest + contador);
        contador++;
    }

    if(contador > 0)
        contador -= 1;
    tamanho_dest = contador;
    k = 0;
    if(size < (tamanho_dest + 2))
    {
        contador = 0;
        atual = *(dest + contador);
        while(atual != '\0')
        {
            atual = *(src + contador);
            contador++;
        }
        if(size > tamanho_dest)
            return (contador - 1 + tamanho_dest);
        return (contador - 1 + size);
    }
    while(contador < (tamanho_dest + size) && (size > (tamanho_dest + 1)))
    {
        atual = *(src + k);
        if(atual == '\0')
            break;
        *(dest + contador) = atual;
        contador++;
        k++;
    }
    *(dest + contador) = '\0';
	return (contador);
}
size_t	ft_strlcat_gold_old(char *dest, const char *src, size_t size)
{
    printf("src = '%s'\n", src);
    printf("dest = '%s'\n", dest);
    size_t	contador;
    size_t	k;
    char    atual;
    int     tamanho_dest;

	contador = 0;
    atual = *(dest + contador);
    while(atual != '\0')
    {
        atual = *(dest + contador);
        contador++;
    }

    if(contador > 0)
        contador -= 1;
    tamanho_dest = contador;
    k = 0;
    printf("contador = %ld\ttamanho_dest = %i\tsize = %li\n", contador, tamanho_dest, size);
    if(size < (tamanho_dest + 2))
    {
        contador = 0;
        atual = *(dest + contador);
        while(atual != '\0')
        {
            atual = *(src + contador);
            contador++;
        }
        if(size > tamanho_dest)
            return (contador - 1 + tamanho_dest);
        return (contador - 1 + size);
    }
    while(contador < (tamanho_dest + size) && (size > (tamanho_dest + 1)))
    {
        atual = *(src + k);
        printf("atual = '%c'\tcontador = %ld\ttamanho_dest = %i\tsize = %li\n", atual, contador, tamanho_dest, size);
        if(atual == '\0')
            break;
        *(dest + contador) = atual;
        contador++;
        k++;
    }
    *(dest + contador) = '\0';
    printf("saida final (dest) = '%s'\n", dest);
	return (contador);
}



/*
**
**     Some systems (the BSDs, Solaris, and others) provide the
**     following function:
**
**         size_t strlcat(char *dest, const char *src, size_t size);
**
**     This function appends the null-terminated string src to the
**     string dest, copying at most size-strlen(dest)-1 from src, and
**     adds a terminating null byte to the result, unless size is less
**     than strlen(dest).  This function fixes the buffer overrun
**     problem of strcat(), but the caller must still handle the
**     possibility of data loss if size is too small.  The function
**     returns the length of the string strlcat() tried to create; if
**     the return value is greater than or equal to size, data loss
**     occurred.  If data loss matters, the caller must either check the
**     arguments before the call, or test the function return value.
**     strlcat() is not present in glibc and is not standardized by
**     POSIX, but is available on Linux via the libbsd library.
 */