/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:06:12 by jtoty             #+#    #+#             */
/*   Updated: 2021/02/15 12:23:14 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"
#include <string.h>
#include <stdio.h>

// static void		ft_print_result(int n)
// {
// 	char c;

// 	if (n >= 10)
// 		ft_print_result(n / 10);
// 	c = n % 10 + '0';
// 	write (1, &c, 1);
// }



size_t uh_strlcat(dst, src, siz)
    char *dst;
    const char *src;
    size_t siz;
{
    register char *d = dst;
    register const char *s = src;
    register size_t n = siz;
    size_t dlen;

    /* Find the end of dst and adjust bytes left but don't go past end */
    while (n-- != 0 && *d != '\0')
        d++;
    dlen = d - dst;
    n = siz - dlen;

    if (n == 0)
        return(dlen + strlen(s));
    while (*s != '\0') {
        if (n != 1) {
            *d++ = *s;
            n--;
        }
        s++;
    }
    *d = '\0';

    return(dlen + (s - src));
}


static void		check_strlcat(char *dest, char *src, int size, int dest_len, char *c_esperado, int s_esperado)
{
	int x;
	int at_most;
	char *join;
	char *jointwo;
	int i;
	int temp;

	join = (char *)malloc(sizeof(char) * (strlen(dest) + strlen(src)));
	jointwo = (char *)malloc(sizeof(char) * (strlen(dest) + strlen(src)));
	printf("dest = '%s'(%ld)\n", dest, strlen(dest));
	printf("src = '%s'(%ld)\n", src, strlen(src));
	printf("size = %d\n", size);

	printf("\n---------------\n");

	printf("saida seria a concatenação de '%s'(%ld) e '%s'(%ld)\n", dest, strlen(dest), src, strlen(src));
	printf("que é '%s%s'(%ld)\n", dest, src, strlen(dest) + strlen(src));
	printf("mas size(%d) é menor ou igual a concatenacao(%ld)? %s\n", size, strlen(dest) + strlen(src),  (size <= (strlen(dest) + strlen(src))) ? "sim" : "nao" );
	if (size <= (strlen(dest) + strlen(src)))
	{
		printf("merda :( entao não posso concatenar tudo\n");
		sprintf(join, "%s%s", dest, src);

		temp = (size - 1);
		temp = (temp < 0) ? 0 : temp;
		printf("mas o tamanho do (dest)(%ld) é maior que max((size - 1), 0)(%d)? %s\n", strlen(dest), temp, (strlen(dest) > temp) ? "sim" : "nao");
		if(strlen(dest) > temp)
		{
			printf("entao não posso usar um pouco do src\n");
			printf("vai ter que ser o mesmo que (dest) '%s'(%ld)\n", dest, strlen(dest));
			printf("saida tipo 3 entao retorna => %d\n", strlen(src) + size);
		}
		else
		{
			printf("entao posso usar um pouco do src totalizando max((size - 1), 0) => %d\n", temp);
			i = 0;
			while (i < temp)
			{
				*(jointwo + i) = *(join + i);
				i++;
			}
			*(jointwo + i) = '\0';
			// jointwo = ft_substr(join, 0, (size - 1));
			printf("que é '%s'%d\n", jointwo, strlen(jointwo));
			printf("saida tipo 2 entao retorna => %d\n", strlen(dest) + strlen(src));
		}
		
	}
	else
	{
		printf("legal (: então eu posso concatenar tudo\n");
		printf("resultando em '%s%s'(%ld)\n", dest, src, strlen(dest) + strlen(src));
		printf("saida tipo 1 entao retorna => %d\n", strlen(dest) + strlen(src));
	}

	printf("---------------\n");


	x = strlcat(dest, src, size);
	// printf("\n------\n\nsaida = %d\n", x);
	// write(1, "\n", 1);
	// write(1, dest, dest_len);
	printf("\nsaida = %d\ndest = '%s'(%ld)\n", x, dest, strlen(dest));
	// printf("dest = '%s', size = %ld <= esperado\n", c_esperado, strlen(c_esperado));
	// printf("saida = %d <= esperado\n", s_esperado);

	// free(dest);
}

int				main(int argc, const char *argv[])
{
	char	*destino;
	int		arg;
	int		dest_len;

	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";

	alarm(5);
	dest_len = 15;
	if (!(destino = (char *)malloc(sizeof(*destino) * dest_len)) || argc == 1)
		return (0);
	memset(destino, 0, dest_len);
	memset(destino, 'r', 6);
	if ((arg = atoi(argv[1])) == 1)
	{
		destino[11] = 'a';
		check_strlcat(destino, "lorem", 15, dest_len, "rrrrrrlorem", 11);
	}
	else if (arg == 2)
		check_strlcat(destino, "", 15, dest_len, "", 0);
	else if (arg == 3)
	{
		destino[0] = '\0';
		destino[11] = 'a';
		check_strlcat(destino, "lorem ipsum", 15, dest_len, "lorem ipsum", 11);
	}
	else if (arg == 4)
	{
		destino[14] = 'a';
		check_strlcat(destino, "lorem ipsum dolor sit amet", 15, dest_len, "", 0);
	}
	else if (arg == 5)
	{
		destino[10] = 'a';
		check_strlcat(destino, "lorem ipsum dolor sit amet", 0, dest_len, "", 0);
	}
	else if (arg == 6)
	{
		destino[10] = 'a';
		check_strlcat(destino, "lorem ipsum dolor sit amet", 1, dest_len, "", 0);
	}
	else if (arg == 7)
	{
		memset(destino, 'r', 15);
		check_strlcat(destino, "lorem ipsum dolor sit amet", 5, dest_len, "", 0);
	}
	else if (arg == 8)
	{
		destino[10] = 'a';
		check_strlcat(destino, "lorem ipsum dolor sit amet", 6, dest_len, "", 0);
	}
	else if (arg == 9)
	{
		// "rrrrrrrrrrrrrr"
		memset(destino, 'r', 4);
		check_strlcat(destino, "loaa", 12, dest_len, "", 0);
	}
	else if (arg == 10)
	{
		// "rrrrrrrrrrrrrr"
		memset(dest, 'C', 5);
		/* 5 */ check_strlcat(dest, src, -1, dest_len, "CCCCCAAAAAAAAA", 14);
		//  == 14 && !strcmp(dest, "CCCCCAAAAAAAAA")); showLeaks();
	}
	else if (arg == 11)
	{
		memset(dest, 'C', 15);
		/* 6 */ check_strlcat(dest, src, 17, dest_len, "CCCCCCCCCCCCCCCA", 24);
	}
	else if (arg == 12)
	{
		memset(dest, 0, 30);
		/* 15 */ check_strlcat(dest, "123", 3, dest_len, "12", 3);
	}
	return (0);
}
