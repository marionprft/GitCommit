/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:21:28 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/04 20:08:40 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Tronque set en debut et fin de s1.

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
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
            while (set[j] != s1[i])
                j++;
        }
    }
    s2 = ft_strchr(s1, s1[i]);
    return (s2);
    
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