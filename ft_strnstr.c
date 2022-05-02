/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:30:37 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/02 15:18:13 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_init(int *a, int *b, int *d)
{
	*a = 0;
	*b = 0;
	*d = 0;
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	c;

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
			return (big + i);
		}
		i++;
		c = 0;
	}
	return (NULL);
}
