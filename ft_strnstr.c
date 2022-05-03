/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:30:37 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/03 22:33:37 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_init(int *a, int *b, size_t *d)
{
	*a = 0;
	*b = 0;
	*d = 0;
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	size_t	c;

	ft_init(&i, &j, &c);
	while (big[i] || big[0] == '\0')
	{
		if (ft_strlen(little) > ft_strlen(big) - i)
		{
			return (NULL);
		}
		j = i;
		while (big[j] == big[c] && big[j] && little[c] && c < len)
		{
			c++;
			j++;
		}
		if (c == len - 1)
		{
			return ((char *)big + i);
		}
		i++;
		c = 0;
	}
	return (NULL);
}
