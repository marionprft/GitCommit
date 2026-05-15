/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:38:01 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/15 17:31:12 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void(*del)(void *))
{
	del(&lst->content);
	free(lst);
}
int	main(void)
{
	t_list *node;
	
	node = malloc(sizeof(t_list));
	node->content = "Hello ";
	node->next = NULL;

	printf("Node : %s/n", node->content);
	ft_lstdelone(node, free);
	printf("Del success: %s/n", node->content);
	


	

	

	
}



