/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpf <mpf@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:33:36 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/17 23:51:50 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *f(void *content) 
{
	char *new;
	
	new = ft_substr((char *)content, 0, 2);
	return (new);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*head;
	t_list  *lst_head;

	newnode = ft_lstnew(f(lst->content));
	head = newnode;
	lst_head = lst;
	lst = lst->next;
	while(lst != 0)
	{
		newnode->next = ft_lstnew(f(lst->content));
		lst = lst->next;
		newnode = newnode->next;
	}
	newnode->next = 0;	
	ft_lstclear(&lst_head, del);
	return(head);
}
/*
int main(void)
{
	t_list *n1 = malloc(sizeof(t_list));
	if (!n1)
		return (0);
	n1->content = "test";
	//printf("%s\n", (char *)n1->content);

	t_list *n2 = malloc(sizeof(t_list));
	if (!n2)
		return (0);
	n2->content = "test2";
	n1->next = n2;
	n2->next = NULL;
	
	t_list	*res;
	res = ft_lstmap(n1, f, free);
	
	while(res != 0)
	{
		printf("%s\n", (char *)(res->content));
		res = res->next;
	}
}
*/
