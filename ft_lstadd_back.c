/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:10:48 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/18 19:26:17 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	p = *lst;
	if (lst == NULL)
		return ;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*new;
	t_list	*mobile;

	lst = NULL;
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node1->content = "Hello ";
	node2->content = "World ";
	new = malloc(sizeof(t_list));
	new->content = "!";
	new->next = NULL;
	lst = node1;
	node1->next = node2;
	ft_lstadd_back(&lst, new);
	mobile = lst;
	while(mobile != NULL)
	{
		printf("%s", (char *)mobile->content);
		mobile = mobile->next;
	}
}
*/
