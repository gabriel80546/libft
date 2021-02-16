/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 09:32:13 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/16 18:05:45 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	contador;
	int		zero;

	if (dst == NULL || src == NULL)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	zero = 0;
	contador = 0;
	while (*((char *)src + contador) != '\0')
	{
		if (contador < size)
			*((char *)dst + contador) = *((char *)src + contador);
		else if (contador == size)
		{
			zero = 1;
			*((char *)dst + contador - 1) = '\0';
		}
		contador++;
	}
	if (zero == 0)
		*((char *)dst + contador) = '\0';
	return (contador);
}
