/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 23:33:32 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/21 16:41:36 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		s[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	s[i] = 0;
	return (s);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "hello ";
// 	s2 = "world";
// 	printf("%s\n", ft_strjoin(s1, s2));

// 	char	*ss1;
// 	char	*ss2;

// 	ss1 = "";
// 	ss2 = "world";
// 	printf("%s\n", ft_strjoin(ss1, ss2));

// 	char	*sss1;
// 	char	*sss2;

// 	sss1 = "hello ";
// 	sss2 = "";
// 	printf("%s\n", ft_strjoin(sss1, sss2));

// 	char	*ssss1;
// 	char	*ssss2;

// 	ssss1 = "";
// 	ssss2 = "";
// 	printf("%s\n", ft_strjoin(ssss1, ssss2));
// }
