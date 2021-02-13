/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 09:46:43 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/13 13:57:34 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		size;
	char	**saida;


	size = ft_strlen(s);

	saida = (char **)ft_calloc(sizeof(char *), size + 1);
	i = 0;
	while (i < size)
	{
		*(saida + i) = (char *)ft_calloc(sizeof(char), size + 1);
		i++;
	}
	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		
		i++;
	}
	return (saida);
}
