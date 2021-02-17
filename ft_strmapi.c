/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:17:27 by gpassos-          #+#    #+#             */
/*   Updated: 2021/02/17 10:17:27 by gpassos-         ###   ########.fr       */
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
