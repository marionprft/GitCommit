/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:43:18 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/19 18:57:11 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != (((unsigned char *)s2)[i]))
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "bimbim";
// 	char	s2[] = "bimbim";
// 	char	ss1[] = "bimbam";
// 	char	ss2[] = "bimbim";
// 	char	sss1[] = "bimbim";
// 	char	sss2[] = "bimbam";
// 	size_t	n;

// 	n = 6;
// 	printf("Mon memcmp :\n");
// 	printf("%d\n", ft_memcmp(s1, s2, n));
// 	printf("%d\n", ft_memcmp(ss1, ss2, n));
// 	printf("%d\n", ft_memcmp(sss1, sss2, n));
// 	printf("\nOG :\n");
// 	printf("%d\n", memcmp(s1, s2, n));
// 	printf("%d\n", memcmp(ss1, ss2, n));
// 	printf("%d\n", memcmp(sss1, sss2, n));
// }

