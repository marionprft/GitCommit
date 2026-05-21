/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:00:48 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/21 14:28:51 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		len_dst;

	len_dst = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && size - 1 > i)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	if (size > ft_strlen(dst))
		return (len_dst + ft_strlen(src));
	else
		return (size + ft_strlen(src));
}


// int	main(void)
// {
// char dst[16] = "Hi";
// size_t	r;

// r = ft_strlcat(dst, "there", 16);




// char dst2[16] = "Hi";
// size_t	r2;

// r2 = strlcat(dst2, "there", 16);

// printf("r= %ld\n", r);
// printf("mydest %s\n", dst);
// printf("r2= %ld\n", r2);
// printf("ofdest %s\n", dst2);


	
// // 	char	d[] = "mich";
// // 	char	s[] = "jack";
// // 	char	dOG[] = "mich";
// // 	char	sOG[] = "jack";


	
// // 	printf("Mon strlcat :\n");
// // 	printf("%ld\n", ft_strlcat(d, s, 2));
// // 	printf("Len d : %ld\n", ft_strlen(d));
// // 	printf("%s\n", d);

// // 	printf("\nOG :\n");
// // 	printf("%ld\n", strlcat(dOG, sOG, 2));
// // 	printf("Len dOG : %ld\n", ft_strlen(dOG));
// // 	printf("%s\n", dOG);

// }

