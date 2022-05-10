/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:20:15 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/05 15:57:14 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr( const char *string, int searchedChar)
{
	int	i;

	i = 0;
	if (searchedChar > 127)
		return ((char *)string);
	while (string[i])
	{
		if (string[i] == searchedChar)
			return ((char *)string + i);
		i++;
	}
	if (string[i] == searchedChar)
		return ((char *)string + i);
	return (NULL);
}
