/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 14:32:46 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/06 14:46:28 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalpha(int c)
{
	if (c == 0)
		return (0);
	else if (ft_strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ", c) != 0)
		return (1);
	else if (ft_strchr("abcdefghijklmnopqrstuvwxyz", c) != 0)
		return (1);
	else
		return (0);
}
