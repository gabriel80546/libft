/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 09:46:43 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/16 12:02:41 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static void	ft_zero_four(int *a, int *b, int *c, int *d)
{
	*a = 0;
	*b = 0;
	*c = 0;
	*d = 0;
}

static int	ft_split_wc(char const *s, char c)
{
	int i;
	int	w;
	int	last_w_size;
	int mais_um;

	ft_zero_four(&i, &w, &last_w_size, &mais_um);
	while ((*(s + i) != '\0' || mais_um == 0) && mais_um != 1)
	{
		if (*(s + i) == '\0')
			mais_um = 1;
		if (*(s + i) == c || mais_um == 1)
		{
			if (last_w_size > 0)
				w++;
			last_w_size = 0;
		}
		else
			last_w_size++;
		i++;
	}
	return (w);
}

static int	ft_split_wa(char **saida, char const *s, char c)
{
	int i;
	int	w;
	int	last_w_size;
	int mais_um;

	ft_zero_four(&i, &w, &last_w_size, &mais_um);
	while ((*(s + i) != '\0' || mais_um == 0) && mais_um != 1)
	{
		if (*(s + i) == '\0')
			mais_um = 1;
		if (*(s + i) == c || mais_um == 1)
		{
			if (last_w_size > 0)
			{
				*(saida + w) = (char *)malloc(sizeof(char) * (last_w_size + 1));
				if (*(saida + w) == NULL)
					return (-1);
				w++;
			}
			last_w_size = 0;
		}
		else
			last_w_size++;
		i++;
	}
	return (0);
}

static void	ft_split_set(char **saida, char const *s, char c)
{
	int i;
	int	w;
	int	last_w_size;

	i = 0;
	w = 0;
	last_w_size = 0;
	while (*(s + i) != '\0')
	{
		// printf("*(s + %i) = '%c'\n", i, *(s + i));
		if(*(s + i) == c)
		{
			// printf("\nmais um split em *(s + %d)\n", i);
			if (last_w_size > 0)
			{
				// printf("\n");
				*(*(saida + w) + last_w_size) = '\0';
				w++;
			}
			last_w_size = 0;
		}
		else
		{
			// printf("add para *(*(saida + %i) + %i) -> %c\n", w, last_w_size, *(s + i));
			*(*(saida + w) + last_w_size) = *(s + i);
			last_w_size++;
		}
		i++;
	}
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**saida;

	if (s == NULL)
		return (NULL);
	i = 0;
	words = ft_split_wc(s, c);
	saida = (char **)malloc(sizeof(char *) * (words + 1));
	if (saida == NULL)
		return (NULL);
	if (ft_split_wa(saida, s, c) == -1)
		return (NULL);
	// printf("------------ ft_split_set(saida, s, c) BEGIN\n");
	ft_split_set(saida, s, c);
	// printf("------------ ft_split_set(saida, s, c) END\n");
	return (saida);
}
