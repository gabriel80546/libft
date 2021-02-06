/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 07:35:02 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/06 13:22:05 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stdio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	ft_atoi_backend(char *backend)
{
	int dez;
	int contador;
	int saida;

	contador = strlen(backend);
	dez = 1;
	saida = 0;
	while (contador > 0)
	{
		saida += dez * (*(backend + contador - 1) - '0');
		dez *= 10;
		contador--;
	}
	return (saida);
}

int			ft_atoi(const char *nptr)
{
	int contador;
	int y;
	char *backend;
	int	estado;
	int sinal;

	backend = (char *)malloc(sizeof(char) * 200);
	memset(backend, '\0', 200);

	y = 0;
	estado = 0;
	contador = 0;
	while(*(nptr + contador) != '\0')
	{
		if(estado == 0)
		{
			if(*(nptr + contador) >= '0' && *(nptr + contador) <= '9')
			{
				estado = 1;
				sinal = 1;
				contador -= 1;
			}
			else if(*(nptr + contador) == '+')
			{
				sinal = 1;
				estado = 1;
			}
			else if(*(nptr + contador) == '-')
			{
				sinal = -1;
				estado = 1;
			}
			else if(*(nptr + contador) == '\t' || *(nptr + contador) == '\n' || *(nptr + contador) == '\r' || *(nptr + contador) == '\v' || *(nptr + contador) == '\f' || *(nptr + contador) == ' ')
			{
			}
			else
				break;
		}
		else if(estado == 1)
		{
			if(*(nptr + contador) >= '0' && *(nptr + contador) <= '9')
			{
				*(backend + y) = *((char *)nptr + contador);
				y++;
			}
			else
			{
				break;
			}
		}
		contador++;
	}
	if(y == 0)
		return (0);
	else
		return (sinal * ft_atoi_backend(backend));
}
/*
	apenas o primeiro + ou - eh considerado os outros param o processamento
	as primeiras "barra tnrvf" sao whitespace mas "barra e" eh um caso especial
	qualquer caracter que nao seja numero param o processamento
	vazio retorna zero 
*/
