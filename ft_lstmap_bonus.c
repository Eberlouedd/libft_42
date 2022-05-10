/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:11:25 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/11 00:22:28 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*temp;

	cur = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&cur, del);
			break ;
		}
		ft_lstadd_back(&cur, temp);
		lst = lst->next;
	}
	return (cur);
}
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*cur;

	if (!lst || !f || !del)
		return (NULL);
	begin = malloc(sizeof(t_list));
	if (!begin)
		return (NULL);
	cur = begin;
	while (lst != NULL)
	{
		cur->content = f(lst->content);
		del(lst->content);
		if (lst->next)
		{
			cur->next = malloc(sizeof(t_list));
			if (!cur->next)
				return (ft_lstclear(&begin, del), NULL);
		}
		if (lst->next == NULL)
			cur->next = NULL;
		cur = cur->next;
		lst = lst->next;
	}
	return (begin);
}
*/