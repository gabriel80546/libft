/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 08:48:24 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/11 13:37:51 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			contador;
	unsigned char	left;
	unsigned char	right;

	contador = 0;
	while (contador < n)
	{
		left = *((unsigned char *)s1 + contador);
		right = *((unsigned char *)s2 + contador);
		if (left != right)
			return (left - right);
		contador++;
	}
	return (0);
}
