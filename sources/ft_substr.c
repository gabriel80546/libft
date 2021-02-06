/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:18:31 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/06 16:35:06 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*saida;
	int		contador;

	saida = (char *)malloc(sizeof(char) * len);
	contador = start;
	while (contador < (start + len))
	{
		*(saida + (contador - start)) = *((char *)s + contador);
		contador++;
	}
	return (saida);
}
