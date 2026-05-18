/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:02:39 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/18 22:41:48 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = n - 1;
	if (d > s)
	{
		while (i != 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}

/*
int	main(void)
{
	char	dst[60] = "";
	char	src[] = "totallyspies";
	size_t	n;

	n = 4;
	printf("Mon memmove :\n");
	printf("%s\n", (unsigned char *)ft_memmove(dst, src, n));
	printf("\nOG :\n");
	printf("%s\n", (unsigned char *)memmove(dst, src, n));
}
*/
