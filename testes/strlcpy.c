/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 09:33:54 by gabriel           #+#    #+#             */
/*   Updated: 2021/02/03 09:37:22 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
   char src[40];
   char dest_one[12];
   char dest_two[12];
  
   memset(dest_one, '\0', sizeof(dest_one));
   strcpy(src, "test string");
   strncpy(dest_one, src, 9);
   printf("Final copied string : %s\n", dest_one);
   memset(dest_two, '\0', sizeof(dest_two));
   strcpy(src, "test string");
   ft_strlcpy(dest_two, src, 9);
   printf("Final copied string : %s\n", dest_two);
   return (0);
}
