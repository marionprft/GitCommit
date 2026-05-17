/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:38:01 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/17 23:45:52 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void(*del)(void *))
{
	del(lst->content);
	free(lst);
}

/*
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
*/
