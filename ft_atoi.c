/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:15:01 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/29 17:48:48 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *s)
{
    int sign;
    int i;
    int n;

    sign = 1;
    i = 0;
    n = 0;
    while(s[i] && s[i] < ' ')
        i++;
    while(s[i] == '+' || s[i] == '-')
    {
        sign = -sign;
        i++;
    }
    while('0' <= s[i] && s[i] <= '9')
    {
        n = n * 10;
        n = n + s[i] - 48;
        i++;
    }
    return (n * sign);
}
int main(void)
{
    char s[] = "5643";
    char ss[] = "/bbe";
    char sss[] = " ";
    
    printf("Mon atoi :\n");
    printf("%d\n", ft_atoi(s));
    printf("%d\n", ft_atoi(ss));
    printf("%d\n", ft_atoi(sss));

    /*printf("\nOG :\n");
    printf("%d\n", atoi(s));
    printf("%d\n", atoi(ss));
    printf("%d\n", atoi(sss));*/
}
