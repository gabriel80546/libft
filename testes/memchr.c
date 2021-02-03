/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 08:01:49 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/03 08:31:38 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	const char	str[] = "test_string";
	const char	ch = '_';
	char		*ret_one;
	char		*ret_two;

	printf("test string is \"%s\"\n", str);
	ret_one = memchr(str, ch, strlen(str));
	printf("String after '%c' is \"%s\"\n", ch, ret_one);
	printf("test string is \"%s\"\n", str);
	ret_two = ft_memchr(str, ch, strlen(str));
	printf("String after '%c' is \"%s\"\n", ch, ret_two);
	return (0);
}
