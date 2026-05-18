/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 18:59:40 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/18 19:39:45 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

/*#include<stdio.h>

#define SIZE 5

int	main(void)
{
	char dst[SIZE];
	char *src = "hello";

	printf("Mon strlcpy\n");
	ft_strlcpy(dst, src, SIZE);
	printf("%s\n", dst);

	printf("\nOG\n");
	strlcpy(dst, src, SIZE);
	printf("%s\n", dst);
}*/
