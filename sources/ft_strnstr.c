/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:41:15 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/11 13:47:57 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *l, size_t len)
{
	size_t	i;

	if (ft_strlen(l) == 0)
		return ((char *)big);
	i = 0;
	while (*(big + i) != '\0' && i < len)
	{
		if (*(big + i) == *(l + 0))
		{
			if (ft_strncmp(((char *)big + i), l, ft_strlen(l)) == 0)
			{
				if ((i + ft_strlen(l)) > len)
					return (NULL);
				else
					return ((char *)big + i);
			}
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr_old(const char *big, const char *l, size_t len)
{
	size_t	x;
	size_t	y;

	if (ft_strlen(l) == 0)
		return (char *)big;
	x = 0;
	y = 0;
	while (*(big + x) != '\0')
	{
		if (*(big + x + y) == *(l + y) && (*(l + y) != '\0') && y < len)
			y++;
		else if ((*(l + y) == '\0') && y != 0 && y < len)
			break ;
		else
		{
			y = 0;
			x++;
		}
	}
	if (*(((char *)big + x)) == '\0')
		return ((void *)0);
	else if (x > (len - ft_strlen(l)))
		return ((void *)0);
	else
		return (((char *)big + x));
}
