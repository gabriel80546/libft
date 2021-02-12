/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:30:05 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/12 13:19:11 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_itoa_log(int n)
{
	int contador;
	int temp_dois;

	contador = 0;
	if (n < 0) {
		contador++;
		n = -n; }

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

	saida = (char *)malloc(sizeof(char) * ft_itoa_log(n));
	if (saida == NULL)
		return (NULL);

	if (n == -2147483648LL)
	{
		ft_strlcpy(saida, "-2147483648", 11);
		return (saida);
	}

	// printf("n = %d\n", n);

	contador = 0;
	if(n < 0)
	{
		*(saida + contador) = '-';	
		n = -n;
		contador++;
	}
	contador += ft_itoa_log(n) - 1;

	// printf("resto = %d;\tcontador = %d\n", (n % 10), contador);
	*(saida + contador) = '\0';
	while (n > 9)
	{
		// printf("resto = %d;\tcontador = %d\n", (n % 10), contador - 1);
		*(saida + contador - 1) = (n % 10) + '0';
		n = (n / 10);
		contador--;
	}
	*(saida + contador - 1) = (n % 10) + '0';
	// printf("resto = %d;\tcontador = %d\n", (n % 10), contador - 1);

	return (saida);
}

char		*ft_itoa_old(int n)
{
	char	*saida;
	int		contador;
	int		temp;

	saida = (char *)malloc(sizeof(char) * ft_itoa_log(n));
	if (saida == NULL)
		return (NULL);
	contador = 15;
	if (n == -2147483648LL)
	{
		ft_strlcpy(saida, "-2147483648", 11);
		return (saida);
	}
	if (n < 0)
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
	if (*(saida + 15) == '-')
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
	if (*(saida + 0) == '-')
		*(saida + temp - 1) = '\0';
	else
		*(saida + temp - 0) = '\0';
	return (saida);
}
