/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:15:43 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/03 22:26:58 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	size_t				i;
	unsigned char		*new;
	const unsigned char	*renew;
	unsigned char		temp;

	new = destination;
	renew = source;
	i = 0;
	while (i < size)
	{
		temp = renew[i];
		new[i] = temp;
		i++;
	}
	return (destination);
}
