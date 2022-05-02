/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:04:21 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/02 16:14:24 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*new;

	new = s;
	i = 0;
	while (i < n)
	{
		new[i] = 0;
		i++;
	}
}
