/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: mpf <mpf@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:38:01 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/16 17:18:02 by mpf              ###   ########.fr       */
=======
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:38:01 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/15 17:31:12 by mapointi         ###   ########.fr       */
>>>>>>> efc53d8b743144498e2be84e5f1700bd29a21a85
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void(*del)(void *))
{
<<<<<<< HEAD
	del(lst->content);
	free(lst);
}


int main(void) 
{
	t_list *nodetofree = malloc(sizeof(t_list));
	
	if(!nodetofree) 
		return 1; 
	nodetofree->content = malloc(sizeof(char) * (ft_strlen("Hello ") + 1));
	if(!nodetofree->content)
		return 1;
	ft_strlcpy(nodetofree->content, "Hello ", 6);
	nodetofree->next = NULL;
	printf("%s\n", (char *)nodetofree->content);
	ft_lstdelone(nodetofree, free);
}
=======
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



>>>>>>> efc53d8b743144498e2be84e5f1700bd29a21a85
