/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:16:42 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/12 13:13:04 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static void			ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void			ft_print_tabstr(char **tabstr)
{
	int		i;

	i = 0;
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
		write(1, "\n", 1);
		free(tabstr[i]);
		i++;
	}
	free(tabstr);
}

static void			check_split(char *s, char c)
{
	char	**tabstr;

	printf("tabstr = %p\n", tabstr);
	printf("*tabstr = %p\n", *tabstr);
	printf("*(tabstr + 1) = %p\n", *(tabstr + 1));
	if (!(tabstr = ft_split(s, c)))
		ft_print_result("NULL");
	else
		ft_print_tabstr(tabstr);
}

int					main_two(void)
{
	char *s = "      split       this for   me  !       ";

	char **result = ft_split(s, ' ');

	printf("result = %p\n", result);
	printf("*result = %p\n", *result);
	printf("*(result + 1) = %p\n", *(result + 1));
	printf("result = %d;\t!result = %d\n", result, !result);
	if (!result) {
		printf("TEST_SUCCESS\n");
		return (0); }
	printf("TEST_FAILED\n");
	return (1);
}


int					main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	if ((arg = atoi(argv[1])) == 1)
		check_split("          ", ' ');
	else if (arg == 2)
		check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	else if (arg == 3)
		check_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	else if (arg == 4)
		check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	else if (arg == 5)
		check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	return (0);
}
