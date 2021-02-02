/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:16:02 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/02 13:51:52 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	int		contador;
	char	*temp;

	temp = (char *)s;
	contador = 0;
	while (contador < n)
	{
		temp[contador] = 0;
		contador++;
	}
	s = temp;
}
