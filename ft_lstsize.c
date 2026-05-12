/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 22:26:09 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/12 18:58:12 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != 0)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list *l = malloc(sizeof(t_list));
// 	if (!l)
// 		return (0);

// 	char *tab[] = {"j'adore ", "les ", "listes ", "chainees", "yehhh!"};
// 	int i = 0;

// 	t_list	*head = l ;
// 	while (i < 5)
// 	{			
// 		l->content = tab[i];
// 		printf("%s\n", (char *)(l->content));
// 		if(i < 4)
// 		{
// 			l->next = malloc(sizeof(t_list));
// 			if (!l->next)
// 				return (0);
// 			l = l->next;
// 		}
// 		i++;
// 	}
// 	l->next = 0;

// 	printf("lstsize = %d\n", ft_lstsize(head));
// }