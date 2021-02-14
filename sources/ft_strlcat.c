/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:47:40 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/14 09:41:11 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t size)
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
