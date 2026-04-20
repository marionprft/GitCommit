/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:46:10 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/20 19:18:51 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
        return (1);
    else
        return (0);
}

#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_isalnum('k'));
    printf("%d\n", ft_isalnum('9'));
    printf("%d\n", ft_isalnum(37));
    printf("%d\n", ft_isalnum(102));

    return (0);
}