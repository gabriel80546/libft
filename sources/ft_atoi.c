/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 07:35:02 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/11 08:18:27 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static int	ft_atoi_backend(int sinal, char backend[40])
{
	int dez;
	int contador;
	int saida;

	contador = ft_strlen(backend);
	dez = 1;
	saida = 0;
	while (contador > 0)
	{
		if(dez > 1000000000 && sinal == 1)
			return (-1);
		else if(dez > 1000000000 && sinal == -1)
			return (0);
		saida += dez * (backend[contador - 1] - '0');
		dez *= 10;
		contador--;
	}
	return (sinal * saida);
}

int			ft_atoi(const char *nptr)
{
	int			contador;
	int			y;
	char		backend[40];
	int			estado;
	int			sinal;

	ft_memset(backend, '\0', 40);
	y = 0;
	estado = 0;
	contador = 0;
	sinal = 1;
	while (*(nptr + contador) != '\0')
	{
		if (estado == 0)
		{
			if (*(nptr + contador) >= '0' && *(nptr + contador) <= '9')
			{
				estado = 1;
				contador -= 1;
			}
			else if (*(nptr + contador) == '+')
				estado = 1;
			else if (*(nptr + contador) == '-')
			{
				sinal = -1;
				estado = 1;
			}
			else if (ft_strchr("\t\n\r\v\f ", *(nptr + contador)) != 0)
			{
			}
			else
				break ;
		}
		else if (estado == 1)
		{
			if (y > 30)
				break ;
			else if (*(nptr + contador) >= '0' && *(nptr + contador) <= '9')
			{
				backend[y] = *((char *)nptr + contador);
				y++;
			}
			else
				break ;
		}
		contador++;
	}
	if (y == 0)
		return (0);
	else
		return (ft_atoi_backend(sinal, backend));
}

/*
**	apenas o primeiro + ou - eh considerado os outros param o processamento
**	as primeiras "barra tnrvf" sao whitespace
**	qualquer caracter que nao seja numero param o processamento
**	vazio retorna zero
*/
