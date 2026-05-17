/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 20:03:33 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/17 23:22:47 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

int     nb_char(int n)
{
    int     nb;

    nb = 0;
    if (n < 0)
    {
        n = -n;
        nb = 1;
    }
    while (n / 10 != 0)
    {
        nb++;
        n = n / 10;
    }
    return (nb);
}

char    *ft_itoa(int n)
{
    int     nb;
    char    *str;
    long    nlong;
    
    nlong = n;
    nb = nb_char(n);
    str = malloc(sizeof(char) * (nb + 1));
     if (!str)
        return (NULL);
    if (nlong < 0)
    {
        str[0] = '-';
        nlong = -nlong;
    }
    while (nlong / 10 != 0)
    {
        str[nb--] = nlong % 10 + '0';
        nlong = nlong /10;
    }
    str[nb--] = nlong % 10 + '0';
    str[nb_char(n) + 1] = 0;
    return (str);
}
/*
int main(void)
{
    printf("Res: %s\n", ft_itoa(-2147483648));
    return 0;
}
*/
