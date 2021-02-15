/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:47:40 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/15 15:06:35 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

static void	ft_strlcat_tudo(char *dest, const char *src, size_t dl, size_t sl)
{
	size_t	i;

	i = 0;
	while (i < sl)
	{
		*((char *)dest + i + dl) = *((char *)src + i);
		i++;
	}
	*((char *)dest + i + dl) = '\0';
}

static void	ft_strlcat_part(char *dest, const char *src, size_t dl, size_t s)
{
	size_t	i;
	int		temp;

	temp = ft_max(((int)s - 1), 0);
	i = dl;
	while ((int)i < temp)
	{
		*((char *)dest + i) = *((char *)src + i - dl);
		i++;
	}
	*((char *)dest + i) = '\0';
}

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_l;
	size_t	src_l;

	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	if (dest_l >= size)
		return (src_l + size);
	if (size <= dest_l + src_l)
		ft_strlcat_part(dest, src, dest_l, size);
	else
		ft_strlcat_tudo(dest, src, dest_l, src_l);
	return (dest_l + src_l);
}
