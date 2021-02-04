/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:17:00 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/04 09:03:31 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// teste 2
//  mem = jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj <= tava assim
// (mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 3) <= argumentos passados
//  mem = (NULL) <= deveria retornar isso
//  mem = (NULL) <= retornei isso
// teste 3
//  mem = jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjyxwvutsrzyxjjjjjjjjjjjjjjjjjjjjjjjjjjj <= tava assim
// (mem, "zyxwvutsrqponmlkjihgfedcba", 'a', 26) <= argumentos passados
//  mem = jjjjyxwvutsrzyxjjjjjjjjjjjjjjjjjjjjjjjjjjj <= deveria retornar isso
//  mem = (NULL) <= retornei isso

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int	contador;

	contador = 0;
	while (contador < n)
	{
		if ((*((char *)src + contador - 1)) == c)
			return (dest + contador);
		*((char *)dest + contador) = *((char *)src + contador);
		contador++;
	}
	return (NULL);
}
