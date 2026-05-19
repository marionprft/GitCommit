/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:00:48 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/19 21:11:41 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	char		*d;

	d = dst;
	i = 0;
	if (size <= ft_strlen((const char *)dst))
		return (size + ft_strlen(src));
	while (dst[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && size - 1 > i)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (ft_strlen((const char *)d) + ft_strlen(src));
}

#define SIZE 50

/*
int	main(void)
{
	char	d[SIZE] = "michael";
	char	s[] = "Klaxon";
	char	dOG[SIZE] = "michael";
	char	sOG[] = "Klaxon";

	printf("Mon strlcat :\n");
	ft_strlcat(d, s, SIZE);
	printf("%s\n", d);
	printf("\nOG :\n");
	strlcat(dOG, sOG, SIZE);
	printf("%s\n", d);
}
*/
