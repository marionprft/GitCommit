/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:30:16 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/18 19:40:10 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	f(unsigned int i, char g)
{
	g += i;
	return (g);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tab;

	i = 0;
	tab = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!tab)
		return (NULL);
	while (i < ft_strlen(s))
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
/*
int	main(void)
{
	printf("%s\n", ft_strmapi("Bonjour", f));
	return (0);
}
*/
