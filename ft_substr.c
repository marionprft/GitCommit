/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 21:08:34 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/18 19:41:18 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	while (len-- && s[start])
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = 0;
	return (sub);
}

// int  main(void)
// {
//     char   *s[] = {ft_substr("le poulet c'est trop bon.", 6, 8),
//                     ft_substr("le poulet c'est trop bon.", 6, 50),
//                     ft_substr("le poulet c'est trop bon.", 6, 0),
//                     ft_substr("", 6, 8)};
//     int i = 0;

//     while (i < 4)
//     {
//         printf("%s\n", s[i]);
//         free(s[i]);
//         i++;
//     }
// }