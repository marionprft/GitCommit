/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 20:03:33 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/08 23:52:59 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

int     nb_char(int n)
{
    int     nb;

    nb = 0;
    while (n > 0)
    {
        nb++;
        n = n / 10;
    }
    return (nb);
}

char    *ft_itoa(int n)
{
    int     i;
    int     nb;
    char    *str;

    nb = 0;
    if (n < 0)
    {
        
        
        n = -n;
        nb = nb_char(n); printf("1 : %d\n", nb);
        i = nb + 1;
        str = malloc(sizeof(char) * (nb + 2));
        str[0] = '-';
    }
    else
    {
        nb = nb_char(n);
        str = malloc(sizeof(char) * (nb + 1));
        i = nb_char(n)+1;
    }
    if (!str)
        return (NULL);
    str[i] = 0; i--;
    while (i > 0 && nb > 0)
    {
        printf("nb : %d\n", nb);
        str[i] = n % 10 + '0';
                printf("i : %d\n", i);

        i--;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
        n = n / 10;
        nb--;
    } printf("%s\n", str);
    return (str);
}

int main(void)
{
    printf("Res: %s\n", ft_itoa(65413));
}

