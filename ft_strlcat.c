/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:47:40 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/15 14:20:24 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_l;
	size_t	src_l;

	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	if (dest_l >= size)
		return (src_l + size);
	
	i = (size <= dest_l + src_l) ? dest_l : 0;
	if (size <= dest_l + src_l)
	{
		while ((int)i < ft_max(((int)size - 1), 0))
		{
			*((char *)dest + i) = *((char *)src + i - dest_l);
			i++;
		}
		*((char *)dest + i) = '\0';
	}
	else
	{
		while (i < src_l)
		{
			*((char *)dest + i + dest_l) = *((char *)src + i);
			i++;
		}
		*((char *)dest + i + dest_l) = '\0';
	}
	return (dest_l + src_l);
}

size_t		ft_strlcat_old(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_s;
	size_t	src_s;
	char	atual;

	dest_s = ft_strlen(dest);
	src_s = ft_strlen(src);
	if (size < (dest_s + 1))
		return (size + src_s);
	i = 0;
	atual = *(src + i);
	while (atual != '\0' && (size > (dest_s + 2)) && ((i + dest_s + 1) < size))
	{
		if (i > (dest_s + 1) && (dest_s > 0))
			break ;
		*(dest + i + dest_s) = atual;
		i++;
		atual = *(src + i);
	}
	*(dest + i + dest_s) = '\0';
	return (dest_s + src_s);
}
