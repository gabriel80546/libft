/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:59:01 by gpassos-          #+#    #+#             */
/*   Updated: 2021/02/18 07:56:43 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_strlcpy_p(char *dest, const char *src, size_t size)
{
	int		i;

	i = 0;
	while (*((char *)src + i) != '\0' && i < ((int)size - 1))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (ft_strlen(src));
}

size_t			ft_strlcpy(char *dest, const char *src, size_t size)
{
	if (dest == NULL || src == NULL)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	else if ((int)size < 0)
		return (ft_strlcpy_p(dest, src, ft_strlen(src) + 1));
	else
		return (ft_strlcpy_p(dest, src, size));
}
