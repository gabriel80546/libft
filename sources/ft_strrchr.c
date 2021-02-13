/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:04:35 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/13 12:36:26 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*saida;
	char	*last_find;

	last_find = NULL;
	saida = (char *)s;
	while (*(saida) != '\0')
	{
		if (*(saida) == (char)c)
			last_find = saida;
		saida++;
	}
	if (last_find == NULL && c == 0)
		return (saida);
	else if (last_find == NULL)
		return (NULL);
	else if (*(last_find) == (char)c)
		return (last_find);
	else
		return (NULL);
}
