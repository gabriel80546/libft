/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 08:59:08 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/16 18:12:03 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		contador;
	char	*saida;

	if (s == NULL || f == NULL)
		return (NULL);
	saida = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (saida == NULL)
		return (NULL);
	contador = 0;
	while (*(s + contador) != '\0')
	{
		*(saida + contador) = f(contador, *((char *)s + contador));
		contador++;
	}
	*(saida + contador) = '\0';
	return (saida);
}
