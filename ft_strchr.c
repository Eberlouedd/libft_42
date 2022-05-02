/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:20:15 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/02 15:40:54 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr( const char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string)
	{
		if (string[i] == searchedChar)
			return (string + i);
		i++;
	}
	return (NULL);
}
