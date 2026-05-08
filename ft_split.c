/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:21:28 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/08 18:31:31 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t     nb_c(const char* s, char c)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (i < ft_strlen(s))
    {
        if (s[i] == c)
            j++;
        i++;
    }
    return (j);
}

char    *strdup_mot(const char *s, char c)
{
    size_t  n;
    //char    *cut;
    char    *dup;
    
    //cut = ft_strchr(s, c);
    n = 0;
    dup = (char *)malloc(sizeof(char) * (ft_strlen(s) - ft_strlen(ft_strchr(s, c))));
        if (!dup)
            return (NULL);
    while (n <= ft_strlen(s) - ft_strlen(ft_strchr(s, c)))
    {
        dup[n] = s[n];
        n++;
    }
    dup[n] = 0;
                    //printf("dup %s\n", dup);

    return (dup);
    
}

char    **ft_split(const char* s, char c)
{
    size_t  i;
    size_t  k;
    char    *dup;
    char    **tab;

    i = 0;
    dup = (char *)s;
    k = 0;
    tab = (char **)malloc(sizeof(char *) * (nb_c(s, c) + 2));
    if(!tab)
        return (NULL);
    
        
    while(k <= nb_c(s, c))
    {
        while (i <= ft_strlen(dup) - ft_strlen(ft_strchr(dup, c)))
        {
            if(dup[i] == c)  //|| s[i] == 0)
            {   
                dup = strdup_mot(dup, c);                            printf("%s\n", dup);
                tab[k] = dup;
                k++;                                                 printf("k %ld\n", k);
            }                          
            i++;                                                     printf("i %ld\n", i);   
        }              
          dup = ft_strchr(dup, c);                                   printf("%s\n", dup);
          i = 0;             
    }
    return (tab);
}

int main(void)
{
    char    s[] = "ah legateauil";
    char    c = ' ';
    int     i = 0;
    char **tab = ft_split(s, c);

    while (i < 2)
    {
        printf("%s\n", tab[i]);
        i++;
    }
}