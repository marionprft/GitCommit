/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 19:46:53 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/09 20:04:35 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);     
}

int main(void)
{
    int fd = open("test.txxxt", O_RDWR | O_CREAT, 0600);
    char    s[] = "IL FAUT TESTER SON CODE JULIEEEEEEN";

    ft_putendl_fd(s, fd);
    return(0);
}

