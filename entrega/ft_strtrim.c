/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:59:26 by gpassos-          #+#    #+#             */
/*   Updated: 2021/02/17 10:59:27 by gpassos-         ###   ########.fr       */
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

	if (s1 == NULL || set == NULL)
		return (NULL);
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
