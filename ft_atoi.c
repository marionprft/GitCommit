/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:15:01 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/21 15:03:49 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int		sign;
	int		i;
	int		n;

	sign = 1;
	i = 0;
	n = 0;
	while ((s[i] && ((s[i] > 6 && s[i] < 14) || s[i] == ' '))) 
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while (s[i] && ('0' <= s[i] && s[i] <= '9'))
	{
		n = n * 10;
		n = n + s[i] - 48;
		i++;
	}
	return (n * sign);
}


//  int main(void)
//  {
// 		char s[] = "\t\n -75643";
// 		char ss[] = "-42";
// 		char sss[] = " ";

// 		printf("Mon atoi :\n");
// 		printf("%d\n", ft_atoi(s));
// 		printf("%d\n", ft_atoi(ss));
// 		printf("%d\n", ft_atoi(sss));

// 		char sOG[] = "\t\n -75643";
// 		char ssOG[] = "-42";
// 		char sssOG[] = " ";

// 		printf("\nOG :\n");
// 		printf("%d\n", atoi(sOG));
// 		printf("%d\n", atoi(ssOG));
// 		printf("%d\n", atoi(sssOG));
//  }
 
