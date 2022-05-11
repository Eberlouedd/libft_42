/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:49:08 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/11 19:55:32 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_chain;
	size_t	i;

	i = 0;
	if (start > (unsigned int)ft_strlen(s) - 1)
		start = ft_strlen(s);
	while (s[start + i])
		i++;
	if (i <= len)
		len = i;
	i = 0;
	new_chain = malloc(sizeof(char) * len + 1);
	if (!new_chain)
		return (NULL);
	new_chain[len] = '\0';
	while (i < len)
	{
		new_chain[i] = s[start + i];
		i++;
	}
	return (new_chain);
}
