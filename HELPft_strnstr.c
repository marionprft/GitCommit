/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:15:05 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/29 17:12:19 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char* little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0; 
    while(i < len && little[j] != '\0')
    {
        if(big == little)
            return ((char *)little);
        i++;   
        j++;
    } 
        if((char)little[0] == 0)
            return ((char *)big);
        if(big != little)
            return (NULL);
}
int main(void)
{
    char big[] = "j'ai faim d'un burger!!";
    char la[] = "faim";
    char pas_la[] = "moi aussi";
    char pas_laa[] = "";
    char *pas_laaa = 0;

    
    printf("Mon strnstr :\n");
    printf("%s\n",  ft_strnstr(big, la, 5));
    printf("%s\n",  ft_strnstr(big, pas_la, 5));
    printf("%s\n",  ft_strnstr(big, pas_la, 18));
    printf("%s\n",  ft_strnstr(big, pas_laa, 5));
    printf("%s\n",  ft_strnstr(big, pas_laaa, 5));

    /*printf("\nOG :\n");
    printf("%s\n",  strnstr(big, la, 5));
    printf("%s\n",  strnstr(big, pas_la, 5));
    printf("%s\n",  strnstr(big, pas_la, 18));
    printf("%s\n",  strnstr(big, pas_laa, 5));
    printf("%s\n",  strnstr(big, pas_laaa, 5));*/
}