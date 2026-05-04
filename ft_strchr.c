/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 23:04:04 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/04 19:22:15 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Renvoie une str a partir d'un caractere donne.

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            return ((char *)&(s[i]));
            //retourne tout a partir de s[i=c]
        }
        i++;
    }
    return (NULL); 
}
// int main(void)
// {
//     int c = 'p';
//     char s[] = "nsopgivnw[peg;sbWEFB]";

//     printf("Mon strchr :\n");
//     printf("%s\n", ft_strchr(s, c));
    
//     char s1[] = "nsopgivnw[peg;sbWEFB]";
//     printf("\nOG :\n");
//     printf("%s\n", strchr(s1, c));

// }
