/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 18:30:34 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/21 15:29:21 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	n;
	char	*dup;

	n = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, (n + 1));
	return (dup);
}
// int     main(void)
// {
//     char    s[] = "123poi";
//     char *test = ft_strdup(s);

//     printf("Mon strdup :\n");
//     printf("%s\n", test);
//     free(test);

//     char    ss[] = "123poi";
//     char *testt = ft_strdup(ss);

//     printf("\nOG :\n");
//     printf("%s\n", testt);
//     free(testt);
// }