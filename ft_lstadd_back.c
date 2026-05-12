/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:10:48 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/12 20:06:25 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	int	i;

	i = 0;
	while (i< ft_lstsize(*lst) - 1)
	{
		lst = lst->next;
		i++;
	}
	lst = new->next;
}

int	main(void)
{
	t_list **lst = malloc(sizeof(t_list *));
	if (!lst)
		return (0);
	t_list *new = malloc(sizeof(t_list));
	if (!new)
		return (0);

	char *tab1[] = {"Hello ", "blue ", "world "};
	char tab2 = "!";
	int	i = 0;
	
	t_list **head = lst; 
	while (i < 4)
	{
		lst->content = tab1[i];
		printf("%s", tab);
		lst = lst->next;
		i++;
	}
	printf("%s" ft_lstadd_back(head, new)->content);
}