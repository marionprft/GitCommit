/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpf <mpf@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:33:36 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/16 22:55:30 by mpf              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void print_content(void *content) 
{
	write(1, content, ft_strlen(content));
} 

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while(lst != 0)
	{
		f(lst->content);
		lst = lst->next;
	}
	lst = NULL;
}

int main(void)
{
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3 = malloc(sizeof(t_list));
	if(!n1 || !n2 || !n3)
		return (1);
	// n1->content = malloc(sizeof(char) * (ft_strlen("Hello ") + 1));
	// if(!n1->content)
	// 	return (1);
	ft_strlcpy(n1->content, "Hello ", 7);
	n2->content = malloc(sizeof(char) * (ft_strlen("World ") + 1));
	if(!n2->content)
		return (1);
	ft_strlcpy(n2->content, "World ", 7);
	n3->content = malloc(sizeof(char) * (ft_strlen("!") + 1));
	if(!n3->content)
		return (1);
	ft_strlcpy(n3->content, "!", 2);
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;

	ft_lstiter(n1, print_content);
	ft_lstclear(&n1, free);
}