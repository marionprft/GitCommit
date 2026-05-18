/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 17:40:16 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/18 19:30:46 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int		fd;
	char	c;

	fd = open("test.txt", O_RDWR | O_CREAT, 0600);
	c = 'h';
	ft_putchar_fd(c, fd);
	return (0);
}
*/
