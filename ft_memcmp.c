/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:43:40 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/02 18:47:23 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (pointer1[i] != pointer2[i])
			return (pointer1[i] - pointer2[i])
	}
	return (0);
}
