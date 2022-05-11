/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:08:07 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/11 19:58:06 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t					i;
	unsigned char			*new;
	const unsigned char		*renew;

	if (!destination || !source)
		return (NULL);
	new = destination;
	renew = source;
	i = 0;
	while (i < size)
	{
		new[i] = renew[i];
		i++;
	}
	return (destination);
}
