/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:21:28 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/21 18:05:42 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Tronque set en debut et fin de s1.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*s;
	size_t	i;

	start = 0;
	i = 0;
	while (i < ft_strlen(set))
	{	
		printf("set avant strchr :%s\n", set);
		s1 = ft_strchr(s1, s1[start]);
				printf("\ns1 apres strchr : %s\n", set);

		if(set[i] != s1[start])
			i++;
		else
		{
			start++;
			i = 0;
		}
	}
	i = 0;
	end = ft_strlen(s1) - 1;
	while (set)
	{
		s1 = ft_strrchr(s1, s1[end]);
		if(set[i] != s1[end])
			i++;
		else
		{
			end--;
			i = 0;
		}
	}
	s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (s1)
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = 0;
	return (s);
}

int	main(void)
{
	char *s1 = "?55]ah bah dakkeur///?55]";
	char *s2 = "?55]ah bah dakkeur///?55]boop";
	char *s3 = "?55]ah bah dakkeur///?55???5";
	char *s4 = "5]?";
	char *set = "5]?";

	printf("%s\n", ft_strtrim(s1, set));
	printf("%s\n", ft_strtrim(s2, set));
	printf("%s\n", ft_strtrim(s3, set));
	printf("%s\n", ft_strtrim(s4, set));
}

