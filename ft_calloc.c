/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:49:54 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/29 19:07:44 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t elmt, size_t size)
{
    unsigned int *mem;
   
    //if(PTRDIFF_MAX > size)
      //  return ("errno");
    mem = malloc(sizeof(size) * (elmt - 1));
    ft_bzero(mem, size);
    return (mem);
}
int main(void)
{     
    printf("Mon ft_calloc :\n");
    printf("%ls\n", (int *)ft_calloc(5, 1));
    printf("%ls\n", (int *)ft_calloc(3, 4));
    printf("%ls\n", (int *)ft_calloc(0, 1));
    printf("%ls\n", (int *)ft_calloc(5, 0));
    printf("%ls\n", (int *)ft_calloc(2147483648, 4));
    printf("%ls\n", (int *)ft_calloc(0, 0));

    printf("\nOG :\n");
    printf("%p\n", calloc(5, 1));
    printf("%p\n", calloc(3, 4));
    printf("%p\n", calloc(0, 1));
    printf("%p\n", calloc(5, 0));
    printf("%p\n", calloc(2147483648, 4));
    printf("%p\n", calloc(0, 0));

}