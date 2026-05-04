/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 23:33:32 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/04 16:18:15 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *s;
    size_t i;
    size_t j;

    
    s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!s)
        return (NULL);
    while (i < ft_strlen(s1))
    {
        s[i] = s1[i];
        i++;
        if (s1[i] == 0)
            s[i] = ' ';
    }
    j = 0;
    while (j < ft_strlen(s2))
    {
        s[i+1] = s2[j];
        j++;
        i++;
    }
    s[i + 1] = 0;
    return (s);
}

int main(void)
{
    char    *s1 = "je suis";
    char    *s2 = "Marion";

    printf("%s\n", ft_strjoin(s1, s2));    
}