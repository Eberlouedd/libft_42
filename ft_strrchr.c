/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:30:07 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/02 16:23:52 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	int	i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i] == searchedChar)
			return (string + i);
		i--;
	}
	return (NULL);
}
