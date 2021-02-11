/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:35:18 by jtoty             #+#    #+#             */
/*   Updated: 2021/02/11 10:34:42 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"
#include <stdio.h>
#include <string.h>

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_substr(char *str, int start, int len)
{
	char	*substr;

	if (!(substr = ft_substr(str, start, len)))
		ft_print_result("NULL");
	else
		ft_print_result(substr);
	if (str == substr)
		ft_print_result("\nA new string was not returned");
	else
		free(substr);
}

int				main(int argc, const char *argv[])
{
	char	string[] = "lorem ipsum dolor sit amet";
	int		arg;


	char *str = "01234";
	size_t size = 10;
	char *ret = ft_substr(str, 10, size);

	if (!strncmp(ret, "", 1))
	{
		free(ret);
		printf("TEST_SUCCESS\n");
		return (1);
	}
	free(ret);
	printf("TEST_FAILED\n");
	return (0);


	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_substr(string, 0, 10);
	else if (arg == 2)
		check_substr(string, 7, 10);
	else if (arg == 3)
		check_substr(string, 7, 0);
	else if (arg == 4)
		check_substr(string, 0, 0);
	return (0);
}
