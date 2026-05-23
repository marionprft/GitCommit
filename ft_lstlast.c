/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <marion.pointier-fourcart@lear    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 18:33:36 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/23 15:43:53 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	while (i < ft_lstsize(lst))
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	int		i;
// 	t_list	*head;

// 	lst = malloc(sizeof(t_list));
// 	if (!lst)
// 		return (0);
// 	char *tab[] ={"annie", "are", "you"};
// 	i = 0;
// 	head = lst;
// 	while (i < 3)
// 	{
// 		lst->content = tab[i];
// 		lst->next = malloc(sizeof(t_list));
// 		lst = lst->next;
// 		i++;
// 	}
// 		printf("Dernier node = %s", (char *)ft_lstlast(head)->content);
// }

