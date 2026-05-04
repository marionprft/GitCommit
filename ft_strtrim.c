/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:21:28 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/04 23:00:33 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Tronque set en debut et fin de s1.

#include "libft.h"

char    *front_trim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    char    *s2;

    i = 0;
    j = 0;
    while (i < ft_strlen(s1) && set[j] == s1[i])
    {
        i++;
        if (set[j] != s1[i])
        {
            j = 0;
            while (set[j] != s1[i] && set[j])
                j++;
        }
    }
    s2 = ft_strchr(s1, s1[i]);
    return (s2);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    char    *s3;
    char    *s2;

    s2 = front_trim(s1, set);
    i = ft_strlen(s2) - 1;
    j = 0;
    while (i > 0)
    { 
        if (set[j] != s2[i])
        {
            j = 0;
            while (set[j] && set[j] != s2[i])
            j++;
        }
        if (set[j] == s2[i])
            i--;
    }
    s3 = (char  *)malloc(sizeof(char) * (i + 1));
    return (s3);
}

int main(void)
{
    char    *s1 = "?55]ah bah dakkeur///?55]";
    char    *s2 = "?55]ah bah dakkeur///?55]boop";
    char    *s3 = "?55]ah bah dakkeur///?55";
    char    *set = "?55]";

    printf("%s\n", ft_strtrim(s1, set));
    printf("%s\n", ft_strtrim(s2, set));
    printf("%s\n", ft_strtrim(s3, set));
}