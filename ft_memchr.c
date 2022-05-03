/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:40:33 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/03 23:55:01 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t				i;
	const unsigned char	*new;

	i = 0;
	new = memoryBlock;
	while (i < size)
	{
		if (new[i] == (char)searchedChar)
			return ((unsigned char *)memoryBlock + i);
		i++;
	}
	return (NULL);
}
