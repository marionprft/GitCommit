/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 20:05:47 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/09 20:25:18 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char    c;
    long    nb;

    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        write(fd, "-", 1);
    }
    if (nb > 9)
        ft_putnbr_fd(nb / 10, fd);
    c = nb % 10 + '0';
    write(fd, &c, 1);
}


int main(void)
{
    int fd = open("testnbr.txt", O_RDWR | O_CREAT | O_TRUNC, 0600);
    int n = 0;

    ft_putnbr_fd(n, fd);
}