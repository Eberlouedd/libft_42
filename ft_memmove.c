/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:15:43 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/02 18:12:23 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	int					i;
	unsigned char		*new;
	const unsigned char	temp;

	new = destination;
	i = 0;
	while (i < size)
	{
		temp = source[i];
		new[i] = temp;
		i++;
	}
	return (destination);
}
