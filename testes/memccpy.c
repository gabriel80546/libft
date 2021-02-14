/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 07:23:02 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/14 14:49:27 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

int	main_old(void);

char *g_msg = "This is the string: not copied";

int					main(int argc, const char *argv[])
{
	int		arg;

	char dest[100];
	memset(dest, 'A', 100);

	alarm(5);
	if (argc == 1)
		return (0);
	if ((arg = atoi(argv[1])) == 1)
		main_old();
	else if (arg == 2)
	{
		printf("saida1 ft_memccpy = %p\n", ft_memccpy(dest, "coucou", 'c', 10));
		printf("saida2 ft_memccpy = %p\n", (dest + 1));
	}
	else if (arg == 3)
	{
		printf("saida1 memccpy = %p\n", memccpy(dest, "coucou", 'c', 10));
		printf("saida2 memccpy = %p\n", (dest + 1));
	}
	return (0);
}


int	main_old(void)
{
	char buffer[80];

	memset(buffer, '\0', 80);
	memccpy(buffer, g_msg, ':', 80);
	printf("%s\n", buffer);
	memset(buffer, '\0', 80);
	ft_memccpy(buffer, g_msg, ':', 80);
	printf("%s\n", buffer);


	void	*mem;
	void	*copia;

	mem = (void *)malloc(30);
	copia = mem;

	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 3);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'a', 26);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = memccpy(mem, "zyxwvuzyxwvu", 'x', 20);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);


	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$@##@#@#@##@#@#@#@#@#@#@###@@@#@#@#@#@#@#@#@#@#@#@$\n");
	printf("$#@#@#@#@#@#@#@#@#@#@#@ Parte 2 @#@#@#@#@#@#@#@#@#$\n");
	printf("$#@@@#@#@#@@@@##@#@#@#@#@##@@@@#@#@#@#@@@@#@#@@@@#$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");



	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 3);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'a', 26);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = memccpy(mem, "zyxwvuzyxwvu", 'x', 20);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);

	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$@##@#@#@##@#@#@#@#@#@#@###@@@#@#@#@#@#@#@#@#@#@#@$\n");
	printf("$#@#@#@#@#@#@#@#@#@#@#@ Parte 3 @#@#@#@#@#@#@#@#@#$\n");
	printf("$#@@@#@#@#@@@@##@#@#@#@#@##@@@@#@#@#@#@@@@#@#@@@@#$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");


	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 3);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'a', 26);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = memccpy(mem, "zyxwvuzyxwvu", 'x', 20);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);

	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$@##@#@#@##@#@#@#@#@#@#@###@@@#@#@#@#@#@#@#@#@#@#@$\n");
	printf("$#@#@#@#@#@#@#@#@#@#@#@ Parte 4 @#@#@#@#@#@#@#@#@#$\n");
	printf("$#@@@#@#@#@@@@##@#@#@#@#@##@@@@#@#@#@#@@@@#@#@@@@#$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");


	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = ft_memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = ft_memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 3);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = ft_memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'a', 26);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);
	mem = ft_memccpy(mem, "zyxwvuzyxwvu", 'x', 20);
	printf("%s\n", (mem == 0) ? "(NULL)" : (char *)mem);
	if(mem == NULL) { mem = copia; }
	memset(mem, 'j', 30);

	return (0);
}

// printf("antes tava assim => (%s)\n", (mem == 0) ? "(NULL)" : (char *)mem);