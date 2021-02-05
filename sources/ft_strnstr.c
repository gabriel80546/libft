/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:41:15 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/05 16:46:53 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static size_t	ft_strlen_sub(char *str)
{
	size_t	contador;
	char	atual;

	contador = 0;
	atual = *(str + contador);
	while (atual != '\0')
	{
		contador++;
		atual = *(str + contador);
	}
	return (contador);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    int		x, y;
    size_t	big_size;
    size_t	little_size;
	char	atual;
	char	*saida;

	big_size = ft_strlen_sub((char *)big);
    little_size = ft_strlen_sub((char *)little);
	if(little_size == 0)
		return (char *)big;
	x = 0;
	y = 0;
	saida = (char *)big;
	while (*(big + x) != '\0')
	{
		if(*(big + x + y) == *(little + y) && (*(little + y) != '\0') && y < len)
			y++;
		else if((*(little + y) == '\0') && y != 0 && y < len)
			break;
		else
		{
			y = 0;
			x++;
		}
	}
	saida = (char *)big + x;
	
	if(*(saida) == '\0')
		return ((void *)0);
	else if(x > (len - little_size))
		return ((void *)0);
	else
		return (saida);
}
