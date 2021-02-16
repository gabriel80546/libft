/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 09:46:43 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/16 14:41:06 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static void	ft_zero_four_a(int vars[4])
{
	vars[0] = 0;
	vars[1] = 0;
	vars[2] = 0;
	vars[3] = 0;
}

static void	ft_zero_four(int *a, int *b, int *c, int *d)
{
	*a = 0;
	*b = 0;
	*c = 0;
	*d = 0;
}

static int	ft_split_wc(char const *s, char c)
{
	// int i;
	// int	w;
	// int	last_w_size;
	// int mais_um;
	int vars[4];

	// ft_zero_four(&i, &w, &last_w_size, &mais_um);
	ft_zero_four_a(vars);
	// vars[0] = 0;
	// vars[1] = 0;
	// vars[2] = 0;
	// vars[3] = 0;
	while (*(s + vars[0]) != '\0' || vars[3] == 0)
	{
		if (*(s + vars[0]) == '\0')
			vars[3] = 1;
		if (*(s + vars[0]) == c || vars[3] == 1)
		{
			if (vars[2] > 0)
				vars[1] += 1;
			vars[2] = 0;
		}
		else
			vars[2] += 1;
		vars[0] += 1;
		if (vars[3] == 1)
			break ;
	}
	return (vars[1]);
}

static int	ft_split_wa(char **saida, char const *s, char c)
{
	// int i;
	// int	w;
	// int	last_w_size;
	// int mais_um;
	int vars[4];

	// ft_zero_four(&i, &w, &last_w_size, &mais_um);
	ft_zero_four_a(vars);
	// vars[0] = 0;
	// vars[1] = 0;
	// vars[2] = 0;
	// vars[3] = 0;
	while (*(s + vars[0]) != '\0' || vars[3] == 0)
	{
		if (*(s + vars[0]) == '\0')
			vars[3] = 1;
		if (*(s + vars[0]) == c || vars[3] == 1)
		{
			if (vars[2] > 0)
			{
				*(saida + vars[1]) = (char *)malloc(sizeof(char) * (vars[2] + 1));
				if (*(saida + vars[1]) == NULL)
					return (-1);
				vars[1] += 1;
			}
			vars[2] = 0;
		}
		else
			vars[2] += 1;
		vars[0] += 1;
		if (vars[3] == 1)
			break ;
	}
	return (0);
}

static void	ft_split_set(char **saida, char const *s, char c)
{
	int i;
	int	w;
	int	last_w_size;
	int mais_um;

	ft_zero_four(&i, &w, &last_w_size, &mais_um);
	while ((*(s + i) != '\0') || mais_um == 0)
	{
		if (*(s + i) == '\0')
			mais_um = 1;
		if ((*(s + i) == c) || mais_um == 1)
		{
			if (last_w_size > 0)
			{
				*(*(saida + w) + last_w_size) = (char)'\0';
				w++;
			}
			last_w_size = 0;
		}
		else
		{
			*(*(saida + w) + last_w_size) = (char)*(s + i);
			last_w_size++;
		}
		i++;
		if (mais_um == 1)
			break ;
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
	*(saida + words) = NULL;
	if (ft_split_wa(saida, s, c) == -1)
		return (NULL);
	ft_split_set(saida, s, c);
	return (saida);
}
