/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 09:46:43 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/14 09:40:49 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		size;
	char	**saida;
	int		estado;

	size = ft_strlen(s);
	saida = (char **)malloc(sizeof(char *) * (size + 1));
	if (saida == NULL)
		return (NULL);
	ft_memset(saida, 0, sizeof(char *) * (size + 1));
	i = 0;
	while (i <= size)
	{
		saida[i] = (char *)malloc(sizeof(char) * (size + 1));
		if (saida == NULL)
			return (NULL);
		j = 0;
		while (j <= size)
		{
			saida[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	k = 0;
	estado = 0;
	while (s[i] != '\0')
	{
		if (estado == 0)
		{
			if (s[i] != c)
			{
				i--;
				estado = 1;
				k = 0;
			}
		}
		else if (estado == 1)
		{
			if (s[i] != c)
			{
				saida[j][k] = s[i];
				k++;
			}
			else
			{
				saida[j][k] = '\0';
				estado = 0;
				i--;
				j++;
				k = 0;
			}
		}
		i++;
	}
	if (estado == 1)
		saida[j + 1] = NULL;
	else
		saida[j + 0] = NULL;
	return (saida);
}
