/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <marion.pointier-fourcart@lear    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:10:48 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/23 15:57:35 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	p = *lst;
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
