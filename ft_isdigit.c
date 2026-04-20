/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:25:11 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/20 19:20:06 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include<stdio.h>
int main(void)
{
    printf("%d\n", ft_isdigit(37));
    printf("%d\n", ft_isdigit(53));
    printf("%d\n", ft_isdigit('6'));
    printf("%d\n", ft_isdigit('p'));

    return (0);
}*/