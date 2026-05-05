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

//Tronque set en debut et fin de s1.

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char    *s;
    size_t j;
    
    start = 0;
    while (ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1) - 1;
    while (end > start && ft_strchr(set, s1[end]))
        end--;
   
    s = (char  *)malloc(sizeof(char) * (1 + end - start));
    if (!s)
        return (NULL);
    j = 0;
    while (j <= end-start)
    {
        s[j] = s1[start + j];
        j++;
    }
    s[j] = 0;
    return (s);
}

int main(void)
{
    char    *s1 = "?55]ah bah dakkeur///?55]";
    char    *s2 = "?55]ah bah dakkeur///?55]boop";
    char    *s3 = "?55]ah bah dakkeur///?55???5";
    char    *set = "5]?";

    printf("%s\n", ft_strtrim(s1, set));
    printf("%s\n", ft_strtrim(s2, set));
    printf("%s\n", ft_strtrim(s3, set));
}