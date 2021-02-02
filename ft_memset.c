/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 09:10:12 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/02 11:28:25 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int		contador;
	char	*saida_temp;
	void	*saida;

	saida_temp = (char *)s;
	contador = 0;
	while (contador < n)
	{
		*(saida_temp + contador) = (char)c;
		contador++;
	}
	saida = saida_temp;
	return (saida);
}
