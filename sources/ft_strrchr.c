/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:04:35 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/05 14:44:33 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*saida;
	char	*last_find;

	last_find = (void *)0;
	saida = (char *)s;
	while (*(saida) != '\0')
	{
		if (*(saida) == (char)c)
			last_find = saida;
		saida++;
	}
	if (last_find == (void *)0 && c == 0)
		return (saida);
	else if (last_find == (void *)0)
		return ((void *)0);
	else if (*(last_find) == (char)c)
		return (last_find);
	else
		return ((void *)0);
}
