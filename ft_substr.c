/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:18:31 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/11 10:43:44 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*saida;
	size_t	contador;

	saida = (char *)malloc(sizeof(char) * (len + 1));
	if (saida == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		*(saida + 0) = '\0';
		return (saida);
	}
	contador = start;
	while (contador < (start + len))
	{
		*(saida + (contador - start)) = *((char *)s + contador);
		contador++;
	}
	*(saida + (contador - start)) = '\0';
	return (saida);
}
