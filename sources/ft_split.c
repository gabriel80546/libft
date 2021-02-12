/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 09:46:43 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/12 11:01:42 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	int		contador;
	int		atual_caracter;
	int		atual_string;
	int		size;
	char	**saida;

	size = ft_strlen(s);
	saida = ft_calloc(sizeof(char **), size + 2);
	contador = 0;
	while (contador < size)
	{
		*(saida + contador) = ft_calloc(sizeof(char *), size + 2);
		contador++;
	}
	contador = 0;
	atual_caracter = 0;
	atual_string = 0;
	size = 2;
	while (*(s + contador) != '\0')
	{
		if (*(s + contador) == c)
		{
			size = 1;
			if (atual_caracter != 0)
			{
				*(*(saida + atual_string) + atual_caracter) = '\0';
				atual_caracter = 0;
				atual_string++;
			}
		}
		else
		{
			size = 2;
			*(*(saida + atual_string) + atual_caracter) = *(s + contador);
			atual_caracter++;
		}
		contador++;
	}
	if (size == 1)
		*(saida + atual_string + 0) = NULL;
	else if (size == 2)
		*(saida + atual_string + 1) = NULL;
	return (saida);
}
