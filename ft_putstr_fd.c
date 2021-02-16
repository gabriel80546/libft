/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 09:24:13 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/16 18:13:28 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int contador;

	if (s == NULL)
		return ;
	contador = 0;
	while (*(s + contador) != '\0')
	{
		ft_putchar_fd(*(s + contador), fd);
		contador++;
	}
}
