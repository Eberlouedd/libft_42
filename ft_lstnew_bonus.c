/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 05:15:49 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/10 05:27:58 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list liste;

	liste = malloc((sizeof(t_list));
	if (!liste)
		return (NULL);
	liste->content = content;
	liste->next = NULL;
	return (liste);
}
