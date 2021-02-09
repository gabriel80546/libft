/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:09:27 by jtoty             #+#    #+#             */
/*   Updated: 2021/02/09 11:30:07 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "../libft.h"
#include <stdio.h>
#include <string.h>


static void		check_toupper(int start, int end)
{
	int		c;

	while (start <= end)
	{
		c = ft_toupper(start);
		write(1, &c, 1);
		start++;
	}
}

int				main(int argc, const char *argv[])
{
	int		arg;

	int i;

	i = -100;
	while (i < 530)
	{
		printf("c(%i) = '%c'; ft_toupper => %i; toupper => %i\n", i, i, ft_toupper(i), toupper(i));
		if (ft_toupper(i) != toupper(i))
		{
			printf("TEST_FAILED");
			return (1);
		}
		i++;
	}
	printf("TEST_SUCCESS");


	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_toupper(0, 47);
	else if (arg == 2)
		check_toupper('0', '9');
	else if (arg == 3)
		check_toupper(58, 64);
	else if (arg == 4)
		check_toupper('A', 'Z');
	else if (arg == 5)
		check_toupper(91, 96);
	else if (arg == 6)
		check_toupper('a', 'z');
	else if (arg == 7)
		check_toupper(123, 127);
	return (0);
}
