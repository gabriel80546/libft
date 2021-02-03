/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 07:23:02 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/03 07:29:17 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

char *g_msg = "This is the string: not copied";

int	main(void)
{
	char buffer[80];

	memset(buffer, '\0', 80);
	memccpy(buffer, g_msg, ':', 80);
	printf("%s\n", buffer);
	memset(buffer, '\0', 80);
	ft_memccpy(buffer, g_msg, ':', 80);
	printf("%s\n", buffer);
	return (0);
}
