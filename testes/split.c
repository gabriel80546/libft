/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:16:42 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/13 14:56:43 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void	main_one(void);
void	main_two(void);
void	main_three(void);
void	main_four(void);
void	main_five(void);
void	main_six(void);
void	main_seven(void);
void	main_eight(void);
void	main_nine(void);
void	main_ten(void);

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
	printf("*(tabstr + 0) = %p\n", *(tabstr + 0));
	printf("*(tabstr + 1) = %p\n", *(tabstr + 1));
	printf("*(tabstr + 2) = %p\n", *(tabstr + 2));
	if (!(tabstr = ft_split(s, c)))
		ft_print_result("NULL");
	else
		ft_print_tabstr(tabstr);
}

int					main_two_old(void)
{
	char *s = "      split       this for   me  !       ";

	char **result = ft_split(s, ' ');

	printf("result = %p\n", result);
	printf("*result = %p\n", *result);
	printf("*(result + 1) = %p\n", *(result + 1));
	printf("result = %p;\t!result = %d\n", result, !result);
	if (!result) {
		printf("TEST_SUCCESS\n");
		return (0); }
	printf("TEST_FAILED\n");
	return (1);
}

int		print_split(char **strings)
{
	int i;

	i = 0;
	while (*(strings + i) != NULL)
	{
		printf("strings[%i] = %s\n", i, *(strings + i));
		i++;
	}
	return (0);
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
	else if (arg == 11)
		main_one();
	else if (arg == 12)
		main_two();
	else if (arg == 13)
		main_three();
	else if (arg == 14)
		main_four();
	else if (arg == 15)
		main_five();
	else if (arg == 16)
		main_six();
	else if (arg == 17)
		main_seven();
	else if (arg == 18)
		main_eight();
	else if (arg == 19)
		main_nine();
	else if (arg == 20)
		main_ten();
	else if (arg == 21)
		print_split(ft_split("teste split", ' '));
	return (0);
}

int		sair(const char *string)
{
	puts(string);
	return 1;
}

void	split_cmp_array(char ** expected, char ** got)
{
	for (; *expected; expected++, got++)
	{
		if (*got == NULL || strcmp(*expected, *got))
		{
			// SET_DIFF(*expected, *got);
			sair("TEST_FAILED\n");
		}
	}

	sair("TEST_SUCCESS\n");
}

void	main_one(void)
{
	char *string = "      split       this for   me  !       ";
	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void*)0)});
	char **result = ft_split(string, ' ');

	split_cmp_array(expected, result);
}

void	main_two(void)
{
	char **expected = ((char*[1]){((void*)0)});
	char *string = "                  ";
	char **result = ft_split(string, ' ');

	split_cmp_array(expected, result);
}

void	main_three(void)
{
	// char **expected = ((char*[1]){((void*)0)}); // eu acho
	char **expected = ((char*[2]){"olol", ((void*)0)}); // eu acho2
	char *s = "                  olol";
	char **result = ft_split(s, ' ');

	split_cmp_array(expected, result);
}

void	main_four(void)
{
	// char **expected = ((char*[1]){((void*)0)}); // eu acho
	char **expected = ((char*[2]){"olol", ((void*)0)}); // eu acho2
	char *s = "olol                     ";
	char **result = ft_split(s, ' ');

	split_cmp_array(expected, result);
}

void	main_five(void)
{
	char **expected = ((char*[1]){((void*)0)}); // eu acho
	char *s = "";
	char **result = ft_split(s, '\65');

	split_cmp_array(expected, result);
}

void	main_six(void)
{
	// char **expected = ((char*[1]){((void*)0)}); // eu acho
	char **expected = ((char*[10]){"0", "0", "0", "0", "0", "0", "0", "0", "0", ((void*)0)}); // eu acho2
	char *s = "0 0 0 0 0 0 0 0 0";
	char **result = ft_split(s, ' ');

	split_cmp_array(expected, result);
}


void	main_seven(void)
{
	// char **expected = ((char*[1]){((void*)0)}); // eu acho
	char **expected = ((char*[6]){"split  ", "this", "for", "me", "!", ((void*)0)}); // eu acho2
	char *s = "split  ||this|for|me|||||!|";
	int i = 0;
	char **result = ft_split(s, '|');

	while (result[i])
	{
		if (strcmp(result[i], *expected))
		{
			sair("TEST_FAILED\n");
		}
		free(result[i]);
		i++;
		expected++;
	}
	free(result);
	sair("TEST_SUCCESS\n");
}

void	main_eight(void)
{
	char *s = "      split       this for   me  !       ";

	char **result = ft_split(s, ' ');
	if (!result)
		sair("TEST_SUCCESS\n");
	sair("TEST_FAILED\n");
}

void	main_nine(void)
{
	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void*)0)});
	char *s = "      split       this for   me  !       ";

	char **result = ft_split(s, ' ');
	while (*result)
	{
		if (strcmp(*result, *expected))
		{
			sair("TEST_FAILED\n");
		}
		result++;
		expected++;
	}
	sair("TEST_SUCCESS\n");
}

void	main_ten(void)
{
	char **expected = ft_split(((void*)0), ' ');

	if (!expected)
		sair("TEST_SUCCESS\n");
	sair("TEST_FAILED\n");
}
