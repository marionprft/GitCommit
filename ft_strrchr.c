/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 19:38:18 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/22 14:49:08 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if (c == 0)
		return((char *)s + ft_strlen(s));
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)(&s[i]));
		}
		i--;
	}
	return (NULL);
}

// int main(void)
// {
//     char *s = "coucou les musulmans, moi je mange la GLAAACEuh";
//     int c = 's';

//     printf("Mon strrchr :\n");
//     printf("%s\n", ft_strrchr(s, c));

//     printf("\nOG :\n");
//     printf("%s\n", strrchr(s, c));
// }