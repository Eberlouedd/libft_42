/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:08:07 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/02 18:12:13 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	int					i;
	unsigned char		*new;
	const unsigned char	*renew;

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
