/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:46:10 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/21 17:44:21 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char	*oct;
	int	i;

	oct = (unsigned char *)b; //conversion temporaire de b pour l'utiliser
	i = 0;

	while (i < len)
	{
		oct[i] = c;
		i++;
	}

	return (oct * len);

}