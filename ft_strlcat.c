/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:47:40 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/15 10:38:16 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// *dest = "lenzo";

// printf("%d\n", ft_strlcat(dest, "manja de lcat", 4));
// => 17
// printf("%s\n", dest);
// => "lenzo"


size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_l;
	size_t	src_l;
	size_t	loop;
	size_t	saida;


	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);

	// printf("dest_l = %i\n", dest_l);
	// printf("src_l = %i\n", src_l);
	// printf("size = %i\n", size);

	// printf("\n\n\n\n");

	// printf("dest = '%s', size = %ld\n", dest, strlen(dest));
	// printf("src = '%s', size = %ld\n", src, strlen(src));
	// printf("src + dest = %d\n", strlen(src) + strlen(dest));
	// printf("src_l + size = %d\n", strlen(src) + size);
	// printf("size = %d\n", size);
	// printf("concat = %s%s\n", dest, src);
	// printf("funfa? %s\n", (size <= (strlen(dest))) ? "nao" : "sim");
	saida = ((size <= (ft_strlen(dest))) ? (ft_strlen(src) + size) : (ft_strlen(src) + ft_strlen(dest)));
	// printf("saida? %d\n", (size <= (strlen(dest))) ? (strlen(src) + size) : (strlen(src) + strlen(dest)));
	// printf("dest+src? %s\n", (size < (strlen(dest) + strlen(src))) ? "nao" : "sim");
	// if(size < (strlen(dest) + strlen(src)))
		// printf("sub? %s\n",   ((size < strlen(dest)) ? "sim" : "nao"));
	// printf("dest_l? %d\n",   (size < (strlen(dest) + strlen(src))) ? ((size < strlen(dest)) ? (strlen(dest)) : ((size > strlen(dest)) ? (size - 1) : (strlen(dest)))) : (strlen(dest) + strlen(src)));
	loop = ((size < (ft_strlen(dest) + ft_strlen(src))) ? ((size < ft_strlen(dest)) ? (ft_strlen(dest)) : ((size > ft_strlen(dest)) ? (size - 1) : (ft_strlen(dest)))) : (ft_strlen(dest) + ft_strlen(src)));

	// printf("loop = %i\n", loop);
	// printf("dest_l = %i\n", dest_l);

	i = dest_l;
	while (i < (loop))
	{
		*((char *)dest + i) = *((char *)src + i - dest_l);
		i++;
	}
	*((char *)dest + i) = '\0';
	return (saida);
}

size_t			ft_strlcat_old(char *dest, const char *src, size_t size)
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
