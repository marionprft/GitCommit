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

// void     is_set(char const *s1, char const *set)
// {
//     size_t  i;

//     i = 0;
//     j = 0;
//     while (i < ft_strlen(s1) && set[i]);
//     {
//         if (s1[i] = set[j])
//             i++;
//         if (s1[i] != set[i])
//             j++;
//     }
    
// }


/*char    *front_trim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    char    *s2;

    i = 0;
    while (i < ft_strlen(s1))
    {
        j = 0;
        while (set[j] != s1[i] && set[j])
            j++;
        i++;
    }
    s2 = ft_strchr(s1, s1[i]);
    return (s2);
}gdb ./a.out
run 
y
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
        if (set[j] == s2[i])
            i--;
        if (set[j] != s2[i])
        {
            j = 0;
            while (set[j] && set[j] != s2[i])
            {
                j++;
                printf("%ld\n", i);
            }
            
            //printf("%c\n", set[i]);
        } 
        break;
    }*/

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
    // char    *s2 = "?55]ah bah dakkeur///?55]boop";
    // char    *s3 = "?55]ah bah dakkeur///?55";
    char    *set = "5]?";

    printf("%s\n", ft_strtrim(s1, set));
    // printf("%s\n", ft_strtrim(s2, set));
    // printf("%s\n", ft_strtrim(s3, set));
}