/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 07:23:02 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/04 09:29:32 by gabriel          ###   ########.fr       */
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