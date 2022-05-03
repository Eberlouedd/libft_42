/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:49:08 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/03 21:41:32 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_chain;
	size_t	i;

	i = 0;
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
