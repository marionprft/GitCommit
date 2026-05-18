/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 22:57:38 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/18 19:56:13 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

/*
int	main(void)
{
	int	c;
	int	cc;
	int	ccc;

	c = 40;
	cc = 'g';
	ccc = 'R';
	printf("Mon tolower :\n");
	printf("%i\n", ft_tolower(c));
	printf("%i\n", ft_tolower(cc));
	printf("%i\n", ft_tolower(ccc));
	printf("%c\n", ft_tolower(c));
	printf("%c\n", ft_tolower(cc));
	printf("%c\n", ft_tolower(ccc));
	printf("\nOG :\n");
	printf("%i\n", tolower(c));
	printf("%i\n", tolower(cc));
	printf("%i\n", tolower(ccc));
	printf("%c\n", tolower(c));
	printf("%c\n", tolower(cc));
	printf("%c\n", tolower(ccc));
}
*/
