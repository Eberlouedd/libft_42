/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:48:23 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/04 15:40:41 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t			i;
	unsigned char	*new;

	new = pointer;
	i = 0;
	while (i < count)
	{
		new[i] = value;
		i++;
	}
	return (pointer);
}
