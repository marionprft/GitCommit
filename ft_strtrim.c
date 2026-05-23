/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <marion.pointier-fourcart@lear    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:21:28 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/23 13:28:41 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	is_start(char const *s1, char const *set)
{
	size_t	start;
	size_t	j;

	start = 0;
	if (!s1 || !set)
		return (0);
	while (start < ft_strlen(s1))
	{
		j = 0;
		while (s1[start] != set[j] && set[j] != 0)
			j++;
		if (set[j] == 0)
			break ;
		start++;
	}
	return (start);
}

size_t	is_end(char const *s1, char const *set)
{
	size_t	end;
	size_t	j;

	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (0);
	while (end >= 0)
	{
		j = 0;
		while (s1[end] != set[j] && set[j] != 0)
			j++;
		if (set[j] == 0)
			break ;
		if (end == 0)
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*s;

	if (!s1 || !set)
		return (NULL);
	start = is_start(s1, set);
	end = is_end(s1, set);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	if (start >= end)
		return (ft_strdup(""));
	s = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		s[i++] = s1[start++];
	}
	s[i] = '\0';
	return (s);
}

// int	main(void)
// {
// 	char	*s4;
// 	char	*set;
// 	char	*s1;
// 	char	*s2;
// 	char	*s3;

// 	s1 = "?5?5]ah bah dakke5ur///?55?]";
// 	s2 = "yes?55]ah bah dakkeur///?55]boop";
// 	s3 = "?55]??]ah bah dakkeur///?55?]]5?";
// 	s4 = "?????";
// 	set = "?";
// 	printf("Test1 :%s\n", ft_strtrim(s1, set));
// 	printf("Test2 :%s\n", ft_strtrim(s2, set));
// 	printf("Test3 :%s\n", ft_strtrim(s3, set));
// 	printf("Test4 :%s\n", ft_strtrim(s4, set));
// }
