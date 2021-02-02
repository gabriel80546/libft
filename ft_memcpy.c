/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:17:00 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/02 15:10:19 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		contador;
	char	*temp_dest;
	char	*temp_src;

	temp_dest = (char *)dest;
	temp_src = (char *)src;
	contador = 0;
	while (contador < n)
	{
		temp_dest[contador] = temp_src[contador];
		contador++;
	}
	dest = (void *)temp_dest;
	return (dest);
}
