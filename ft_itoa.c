/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 20:03:33 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/08 22:23:22 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

int     nb_char(int n)
{
    int     nb;

    nb = 0;
    while (n / 10 > 0)
    {
        nb++;
        n = n / 10;
    }
    return (nb);
}

// int     pow_10(int n)
// {
//     int     i;
//     int     j;

//     i = 0;
//     j = 10;
//     while (i < nb_char(n))
//     {
//         j = j * 10;
//         i++;
//     }
//     return (j);
// }

char    *ft_itoa(int n)
{
    int     i;
    int     nb;
    char    *str;

    nb = nb_char(n);
    if (n < 0)
    {
        str = malloc(sizeof(char) * (nb + 2));
        str[0] = '-';
        i = nb - 2;
    }
    else
    {
        str = malloc(sizeof(char) * (nb + 1)); 
        i = nb - 1;
    }
    if (!str)
        return (NULL);
    while (i > 0 && nb > 0)
    {
        str[i] = nb % 10 + '0';
        i--;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
        nb = nb / 10;
    }
    str[nb_char(n)] = 0;
    return (str);
}

int main(void)
{
    int     n = 463;

    printf("%s\n", ft_itoa(n));
}

