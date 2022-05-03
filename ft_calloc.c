/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:11:54 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/03 21:44:53 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void			*retur;
	unsigned char	*new;
	size_t			i;

	retur = NULL;
	i = 0;
	new = retur;
	new = malloc(elementCount * elementSize);
	if (!retur)
		return (NULL);
	while (i < elementCount)
	{
		new[i] = 0;
		i++;
	}
	return (retur);
}
