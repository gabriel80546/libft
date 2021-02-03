/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 09:10:12 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/03 07:46:41 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	contador;

	contador = 0;
	while (contador < n)
	{
		*((char *)s + contador) = (char)c;
		contador++;
	}
	return (s);
}
