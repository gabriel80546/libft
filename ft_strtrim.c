/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 08:44:55 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/14 09:41:27 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		contador;
	int		inicio;
	char	*saida;

	contador = 0;
	while (*(s1 + contador) != '\0')
	{
		if (ft_strchr(set, *(s1 + contador)) == 0)
			break ;
		contador++;
	}
	inicio = contador;
	contador = ft_strlen(s1) - 1;
	while (contador >= 0)
	{
		if (ft_strchr(set, *(s1 + contador)) == 0)
			break ;
		contador--;
	}
	if (contador <= inicio)
		contador = (inicio + 1);
	saida = ft_substr(s1, inicio, contador - inicio + 1);
	return (saida);
}
