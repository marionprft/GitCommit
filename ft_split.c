/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:21:28 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/09 21:39:38 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t     nb_c(const char* s, char c)
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

char    **ft_split(const char* s, char c)
{
    size_t  end;
    size_t  k;
    size_t  start;
    char    **tab;

    end = 0;
    start = 0;
    k = 0;
    tab = (char **)malloc(sizeof(char *) * (nb_c(s, c) + 1));
    if(!tab)
        return (NULL);
    while (s[end])
    {
        if (s[end] == c || s[end + 1] == 0)
        {
            tab[k] = ft_substr(s, start, end - start + (s[end + 1] == 0));
            while (s[end] == c && s[end] != 0)
                end++;
            start = end++;
            k++;
        }
        else
            end++;
    }
    return (tab);
}

 int main(void)
 {
     char    s[] = "ccc";
     char    c = 'c';
     int     i = 0;
     char **tab = ft_split(s, c);

     (void)tab;
     while (tab[i])
     {
         printf("%s\n", tab[i]);
         i++;
     }
 }
