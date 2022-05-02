/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:48:23 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/02 16:01:35 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *pointer, int value, size_t count)
{
	int				i;
	unsigned char	*new;

	new = pointer;
	i = 0;
	while (i < count)
	{
		new[i] = value;
		i++;
	}
	return (pointer);
}
