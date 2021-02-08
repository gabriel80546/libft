/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:47:40 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/08 10:15:59 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	contador;
	size_t	dest_size;
	size_t	src_size;
	char	atual;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size < (dest_size + 1))
		return (size + src_size);
	contador = 0;
	atual = *(src + contador);
	while (atual != '\0' && (size > (dest_size + 2)))
	{
		if (contador > (dest_size + 1) && (dest_size > 0))
			break ;
		*(dest + contador + dest_size) = atual;
		contador++;
		atual = *(src + contador);
	}
	*(dest + contador + dest_size) = '\0';
	return (dest_size + src_size);
}
