/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 09:46:43 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/16 10:43:47 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static int	ft_split_w(char const *s, char c)
{
	int i;
	int	w;
	int	last_w_size;
	int	flags[5];
	int mais_um;

	i = 0;
	w = 0;
	last_w_size = 0;
	mais_um = 0;
	while (*(s + i) != '\0' || mais_um == 0)
	{
		if(*(s + i) == '\0')
			mais_um = 1;
		if(*(s + i) == c || mais_um == 1)
		{
			printf("mais um split em *(s + %d)\n", i);
			flags[0] = (last_w_size > 0);
			printf("mas o tamanho é maior que 0? %s\n", flags[0] ? "sim" : "nao");
			
			last_w_size = 0;
			if(flags[0])
			{
				printf("entao adiciona mais uma palavra\n");
				w++;
			}
			else
				printf("entao pula esse split\n");
		}
		else
			last_w_size++;
		if (mais_um == 1)
			break ;
		i++;
	}
	return (w);
}

char		**ft_split(char const *s, char c)
{
	int	i;
	int	words;

	if (s == NULL)
		return (NULL);
	i = 0;
	
	printf("\n------------ ft_split_w(s, c) BEGIN\n");
	words = ft_split_w(s, c);
	printf("------------ ft_split_w(s, c) END\n\n");

	printf("a string \"%s\" tem %d palavras\n\n", s, words);
	return (NULL);
}

static int		ft_split_alloc(int size, char **saida)
{
	int j;
	int i;

	i = 0;
	while (i <= size)
	{
		*(saida + i) = (char *)malloc(sizeof(char) * (size + 1));
		if (saida == NULL)
			return (-1);
		j = 0;
		while (j <= size)
		{
			*(*(saida + i) + j) = 0;
			j++;
		}
		i++;
	}
	return (0);
}

static	void	ft_split_init(int vars[4])
{
	vars[0] = 0;
	vars[1] = 0;
	vars[2] = 0;
	vars[3] = 0;
}

static	void	ft_split_pone(int vars[4], char const *s, char c)
{
	if (*(s + vars[0]) != c)
	{
		vars[0] -= 1;
		vars[3] = 1;
		vars[2] = 0;
	}
}

static	void	ft_split_ptwo(int vars[4], char const *s, char c, char **saida)
{
	if (*(s + vars[0]) != c)
	{
		*(*(saida + vars[1]) + vars[2]) = *(s + vars[0]);
		vars[2] += 1;
	}
	else
	{
		*(*(saida + vars[1]) + vars[2]) = '\0';
		vars[3] = 0;
		vars[0] -= 1;
		vars[1] += 1;
		vars[2] = 0;
	}
}

char			**ft_split_old(char const *s, char c)
{
	char	**saida;
	int		vars[4];

	if(s == NULL)
		return (NULL);
	saida = (char **)malloc(sizeof(char *) * ((ft_strlen(s)) + 1));
	if (saida == NULL)
		return (NULL);
	ft_memset(saida, 0, sizeof(char *) * ((ft_strlen(s)) + 1));
	if (ft_split_alloc((ft_strlen(s)), saida) == -1)
		return (NULL);
	ft_split_init(vars);
	while (*(s + vars[0]) != '\0')
	{
		if (vars[3] == 0)
			ft_split_pone(vars, s, c);
		else if (vars[3] == 1)
			ft_split_ptwo(vars, s, c, saida);
		vars[0] += 1;
	}
	vars[1] = ((vars[3] == 1) ? (vars[1] + 1) : (vars[1] + 0));
	*(saida + vars[1]) = NULL;
	vars[1] += 1;
	while ((vars[1] + 1) < (int)ft_strlen(s))
	{
		free(*(saida + vars[1]));
		vars[1] += 1;
	}
	// if (vars[3] == 1)
	// 	*(saida + vars[1] + 1) = NULL;
	// else
	// 	*(saida + vars[1] + 0) = NULL;
	return (saida);
}
