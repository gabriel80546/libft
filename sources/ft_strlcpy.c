/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 09:32:13 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/12 13:53:45 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	contador;
	char	atual;
	int		zero;

	if (size == 0)
		return (ft_strlen(src));
	zero = 0;
	contador = 0;
	atual = *((char *)src + contador);
	while (atual != '\0')
	{
		if (contador < size)
			*((char *)dst + contador) = atual;
		else if (contador == size)
		{
			zero = 1;
			*((char *)dst + contador - 1) = '\0';
		}
		contador++;
		atual = *((char *)src + contador);
	}
	if (zero == 0)
		*((char *)dst + contador) = '\0';
	return (contador);
}
