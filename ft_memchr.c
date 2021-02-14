/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 08:20:14 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/11 13:37:38 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	contador;
	char	*saida;

	saida = (char *)s;
	contador = 0;
	while (contador < n)
	{
		if (*(saida) == (char)c)
			return (saida);
		saida++;
		contador++;
	}
	return (NULL);
}
