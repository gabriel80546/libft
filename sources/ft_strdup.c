/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 15:55:54 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/11 09:55:21 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*saida;
	int		i;

	saida = (char *)malloc(sizeof(char) * ft_strlen(s));
	if(saida == NULL)
		return (NULL);
	while (*((char *)s + i) != '\0')
	{
		*(saida + i) = *((char *)s + i);
		i++;
	}
	return (saida);
}
