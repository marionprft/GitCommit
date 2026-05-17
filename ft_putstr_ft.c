/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 19:29:31 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/17 23:29:33 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}
/*
int main(void)
{
    char    s[] = "oh une pizza 4 chaussures!";
    int     fd = open("teststr.tt", O_RDWR | O_CREAT, 0600);
    
    ft_putstr_fd(s, fd);
    close(fd);
    return (0);
}
*/
