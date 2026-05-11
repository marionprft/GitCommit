/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 16:36:25 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/11 18:31:57 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

int	main(void)
{
	t_list *a;
	char *s = "42";
	a = ft_lstnew((char *)s);
	printf("Content : %s\n", (char *)a->content);
	printf("Adresse prochain node : %p\n", a->next);
	return (0);
}