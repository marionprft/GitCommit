/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 19:46:53 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/18 19:30:51 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	int		fd;
	char	s[] = "IL FAUT TESTER SON CODE JULIEEEEEEN";

	fd = open("test.txxxt", O_RDWR | O_CREAT, 0600);
	ft_putendl_fd(s, fd);
	return(0);
}
*/
