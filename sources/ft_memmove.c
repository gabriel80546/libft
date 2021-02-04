/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:17:00 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/04 12:15:37 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		contador;
	char	temp[n];

	contador = 0;
	while (contador < n)
	{
		temp[contador] = *((char *)src + contador);
		contador++;
	}
	contador = 0;
	while (contador < n)
	{
		*((char *)dest + contador) = temp[contador];
		contador++;
	}
	return (dest);
}
