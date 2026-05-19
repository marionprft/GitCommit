/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:02:39 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/19 18:19:27 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = n;
	if (d > s)
	{
		while (i-- != 0)
			d[i] = s[i];	
	}
	else
	{
		i = -1;
		while (++i < n)
			d[i] = s[i];
	}
	return (d);
}


// int	main(void)
// {
// 	char	dst[60] = "";
// 	char	dstt[60] = "";
// 	char	src1[] = "totallyspies";
// 	//char	src2[] = "totallyspies";
// 	size_t	n;

// 	n = 4;
// 	printf("Mon memmove :\n");
// 	printf("%s\n", (unsigned char *)ft_memmove(dst+1, src1, n));
	
// 	printf("\nOG :\n");
// 	printf("%s\n", (unsigned char *)memmove(dstt+1, src1, n));
// }
