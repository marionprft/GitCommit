/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <marion.pointier-fourcart@lear    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:21:28 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/23 14:56:43 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nb_c(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(const char *s, char c)
{
	size_t	end;
	size_t	k;
	size_t	start;
	char	**tab;

	end = 0;
	start = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char *) * (nb_c(s, c) + 2));
	if (!tab)
		return (NULL);
	while (s[end])
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] && s[end] != c)
			end++;
		if (end > start)
			tab[k++] = ft_substr(s, start, end - start);
	}
	tab[k] = NULL;
	return (tab);
}

// int	main(void)
// {
// 	char	s[] = "   hello   world   ";
// 	char	c;
// 	int		i;
// 	char	**tab;

// 	c = ' ';
// 	i = 0;
// 	tab = ft_split(s, c);
// 	(void)tab;
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// }
