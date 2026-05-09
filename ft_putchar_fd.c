/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 17:40:16 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/09 19:28:07 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
int main(void)
{
    int fd = open("test.txt", O_RDWR | O_CREAT, 0600);
    char    c = 'h';

    ft_putchar_fd(c, fd);
    return (0);
}

