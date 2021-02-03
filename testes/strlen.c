/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 09:21:11 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/03 09:25:19 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
   char str[50];
   int len;

   strcpy(str, "string test");
   len = strlen(str);
   printf("Length of |%s| is |%d|\n", str, len);
   len = ft_strlen(str);
   printf("Length of |%s| is |%d|\n", str, len);
   return (0);
}
