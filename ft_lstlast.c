/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:33:36 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/12 19:09:11 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	int	i;

	i = 0;	
	while (i <= ft_lstsize(lst))
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}

int	main(void)
{
	t_list	*lst = malloc(sizeof(t_list));
	if (!lst)
		return (0);
	char *tab[] ={"annie", "are", "you", "ok", "?"};
	int	i = 0;
	t_list	*head = lst;
	
	while (i < 5)
	{
		lst->content = tab[i];
		lst->next = malloc(sizeof(t_list));
		lst = lst->next;
		i++;
	}
	printf("Dernier node = %s", ft_lstlast(head)->content);
}