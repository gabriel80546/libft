/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 15:39:10 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/06 15:40:36 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_tolower(int c)
{
	if (c == 0)
		return (c);
	if (ft_strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ", c) != 0)
		return (c + ('a' - 'A'));
	else
		return (c);
}
