/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 08:48:24 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/03 09:05:49 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	contador;

	contador = 0;
	while (contador < n)
	{
		if (*((char *)s1 + contador) != *((char *)s2 + contador))
			return (*((char *)s1 + contador) - *((char *)s2 + contador));
		contador++;
	}
	return (0);
}
