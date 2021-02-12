/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:30:05 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/12 14:51:27 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_itoa_log(long n)
{
	int contador;
	int temp_dois;

	contador = 0;
	if (n < 0)
	{
		contador++;
		n = -n;
	}
	temp_dois = n;
	while (n > 9)
	{
		n = n / 10;
		contador++;
	}
	n = temp_dois;
	contador++;
	return (contador + 1);
}

char		*ft_itoa(int n)
{
	char	*saida;
	int		contador;

	if (n == -2147483648LL)
		return ((char *)"-2147483648");
	saida = (char *)malloc(sizeof(char) * ft_itoa_log(n));
	if (saida == NULL)
		return (NULL);
	contador = 0;
	if (n < 0)
	{
		*(saida + contador) = '-';
		n = -n;
		contador++;
	}
	contador += ft_itoa_log(n) - 1;
	*(saida + contador) = '\0';
	while (n > 9)
	{
		*(saida + contador - 1) = (n % 10) + '0';
		n = (n / 10);
		contador--;
	}
	*(saida + contador - 1) = (n % 10) + '0';
	return (saida);
}
