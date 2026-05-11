/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:03:47 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/11 23:24:16 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new) // l'sdresse d'un t_list*
{
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*new;
	int		i;
	t_list	*copy_lst;
	char	*s;

	lst = (t_list *)malloc(sizeof(t_list));
	new = (t_list *)malloc(sizeof(t_list));
	i = 0;
	copy_lst = lst;
	s = "hello";
	while (i < 3)
	{
		copy_lst->content = s;
		copy_lst->next = malloc(sizeof(t_list));
		copy_lst = copy_lst->next;
		i++;
	}
	copy_lst->content = s;
	copy_lst->next = 0;
	new->content = "bai bai";
	ft_lstadd_front(&lst, new);
	
    while (lst != 0)
	{
		printf("%s\n", (char *)(lst->content));
		lst = lst->next;
	}
}

//     char *s = "hello";
//     f(&s);

//     char **tab;
//     tab = malloc(sizeof(char *) * 5);
//     tab[0] = "hello";
//     tab[1] = "world";
//     tab[2] = "42";
//     g(tab);

// void f(char **s)  // l'adresse d'un char *
//                   // aka un char * qui peut etre lui meme modifie
// {
//     int i = 0;
//     while ((*s)[i])
//         i++;
//     *s = 0;
// }
//
// void g(char **tab) // un tableau de char *
// {
//     if (tab[3][0])
//     {}
// }