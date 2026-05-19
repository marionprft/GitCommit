/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:10:31 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/19 18:38:06 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*mem;

	mem = (char *)s;
	i = 0;
	while (i < n)
	{
		if (mem[i] == (char)c)
		{
			return (mem + i);																	
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	s[] = "techno, toujours pareil, boom boom dans les oreilles";
	int			c;
	size_t		n;
	const char	ss[] = "techno, toujours pareil, boom boom dans les oreilles";
	int			cc;
	size_t		nn;

	c = 'm';
	n = 30;
	printf("Mon memchr :\n");
	printf("%s\n", (char *)ft_memchr(s, c, n));
	cc = 'm';
	nn = 30;
	printf("\nOG :\n");
	printf("%s\n", (char *)memchr(ss, cc, nn));
}
*/
