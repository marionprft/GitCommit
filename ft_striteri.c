/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:58:19 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/09 17:39:39 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    f(unsigned int i, char *c)
{  
    *c += 1;
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned    int i;

    i = 0;
    while (i < ft_strlen(s))
    {
        f(i, &s[i]);
        i++;
    }
    write(1, s, ft_strlen(s));
    write(1, "\n", 1);

}

int main(void)
{
    char s[] = "je reviens apres";
    
    ft_striteri(s, f);
    return (0);
}