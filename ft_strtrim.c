/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 08:44:55 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/16 15:30:44 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		inicio;

	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (ft_strchr(set, *(s1 + i)) == 0)
			break ;
		i++;
	}
	inicio = i;
	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		if (ft_strchr(set, *(s1 + i)) == 0)
			break ;
		i--;
	}
	if (i <= inicio)
		i = (inicio + 1);
	return (ft_substr(s1, inicio, i - inicio + 1));
}
