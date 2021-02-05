/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:41:15 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/05 16:51:50 by gabriel          ###   ########.fr       */
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

char			*ft_strnstr(const char *big, const char *l, size_t len)
{
	int	x;
	int	y;

	if (ft_strlen_sub((char *)l) == 0)
		return (char *)big;
	x = 0;
	y = 0;
	while (*(big + x) != '\0')
	{
		if (*(big + x + y) == *(l + y) && (*(l + y) != '\0') && y < len)
			y++;
		else if ((*(l + y) == '\0') && y != 0 && y < len)
			break ;
		else
		{
			y = 0;
			x++;
		}
	}
	if (*(((char *)big + x)) == '\0')
		return ((void *)0);
	else if (x > (len - ft_strlen_sub((char *)l)))
		return ((void *)0);
	else
		return (((char *)big + x));
}
