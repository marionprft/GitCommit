/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpf <mpf@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:21:28 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/05 18:53:14 by mpf              ###   ########.fr       */
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

// char    **big_tab(const char* s, char c)
// {
//     char    **tab;

//     tab = (char **)malloc(sizeof(char *) * (nb_c(s, c) + 2));
//     if(!tab)
//         return (NULL);
//     return (tab);
// }

char    **ft_split(const char* s, char c)
{
    size_t  i;
    size_t  j;
    size_t  k;
    size_t  l;
    char    *dup;
    char    **tab;

    i = 0;
    j = 0;
    k = 0;
    tab = (char **)malloc(sizeof(char *) * (nb_c(s, c) + 2));
    if(!tab)
        return (NULL);
    while(k <= nb_c(s, c))
    {
        while (i <= ft_strlen(s))
        {
            if(s[i] == c || s[i] == 0)
            {   
                dup = (char *)malloc(sizeof(char) * (i + 1 - j));
                if (!dup)
                    return (NULL);
                l = 0;
                while (j < i)
                {
                    dup[l] = s[j];
                    j++;
                    l++;
                }
                dup[l] = 0;
                j = i + 1;
                tab[k] = dup;
                k++;
            }
            i++;    
        }
        tab[k] = 0;
    }
    return (tab);
}

int main(void)
{
    char    s[] = "ah le gateau il";
    char    c = ' ';
    int     i = 0;
    char **tab = ft_split(s, c);

    while (i < 4)
    {
        printf("%s\n", tab[i]);
        i++;
    }
}