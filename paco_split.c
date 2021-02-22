/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 18:22:20 by jfrancis          #+#    #+#             */
/*   Updated: 2021/02/22 15:50:44 by gpassos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t        wc;
	size_t        i;
	int				temp;

	wc = 0;
	i = 0;
	temp = 0;
	if (!s)
		return (wc);
	"      gabriel      passos sudarte gois"
	while (s[i] != '\0')
	{
		if (s[i] != c && temp == 0)
		{
			wc++;
			temp = 1;
		}
		else if (s[i] != c && temp == 1)
		{
		}
		else if (s[i] == c && temp == 1)
		{
			temp = 0;
		}
		i++;
	}
//	if (wc == 0 && s[i] == '\0' && s[i - 1] != c)
//		wc++;
	return (wc);
}

char			**ft_split(char const *s, char c)
{
	char		**s_array;
	size_t		j;
	size_t		words;

	j = 0;
	words = count_words(s, c);
	s_array = (char**)malloc(words * sizeof(char));
	if (!s || !s_array)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != c)
		{
			s_array[j] = (char *)s;
			s++;
		}
		if (*s == c)
			s++;
		s_array[j] = 0;
		j++;
	}
	s_array[j] = 0;
	return (s_array);
}
