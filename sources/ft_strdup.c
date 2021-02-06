/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 15:55:54 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/06 16:19:11 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*saida;
	int		contador;

	saida = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (*((char *)s + contador) != '\0')
	{
		*(saida + contador) = *((char *)s + contador);
		contador++;
	}
	return (saida);
}
