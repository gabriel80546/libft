/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:30:05 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/07 14:40:26 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	char *saida;
	int contador;
	int temp;

	saida = (char *)malloc(sizeof(char) * 40);

	contador = 15;
	if(n < 0)
	{
		*(saida + contador) = '-';
		contador++;
		n = -n;
	}
	while (n > 9)
	{
		*(saida + contador) = (n % 10) + '0';
		n = (n / 10);
		contador++;
	}
	*(saida + contador) = n + '0';
	if(*(saida + 15) == '-')
	{
		*(saida + 0) = *(saida + 15);
		temp = 1;
	}
	else
	{
		*(saida + 0) = *(saida + 15);
		temp = 0;
	}
	while (contador >= 15)
	{
		*(saida + temp) = *(saida + contador);
		temp++;
		contador--;
	}
	if(*(saida + 0) == '-')
		*(saida + temp - 1) = '\0';

	return (saida);
}
