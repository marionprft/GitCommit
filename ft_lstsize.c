/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 22:26:09 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/11 23:38:36 by mapointi         ###   ########.fr       */
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

int	main(void)
{
	t_list *lst = malloc(sizeof(t_list));

	char *tab[] = {"j'adore ", "les ", "listes ", "chainees", "yehhh!"};
	int i = 0;

	while (i < 5)
	{
		lst->content = tab[i];
		lst->next = malloc(sizeof(t_list));
		i++;		
		printf("%s\n", (char *)lst->content);

	}
	//lst->content = tab[i];
	lst->next = 0;

	printf("lstsize = %d\n", ft_lstsize(lst));

	// while (lst != 0)
	// {
	// 	lst->content = tab[i];
		
	// }
}