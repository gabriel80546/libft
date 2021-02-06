/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 15:23:59 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/06 15:40:56 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_toupper(int c)
{
	if (c == 0)
		return (c);
	if (ft_strchr("abcdefghijklmnopqrstuvwxyz", c) != 0)
		return (c - ('a' - 'A'));
	else
		return (c);
}
