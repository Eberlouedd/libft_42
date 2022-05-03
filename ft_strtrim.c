/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:31:03 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/03 16:09:18 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_init(int *i, int *j, int *c, int *buff)
{
	*buff = *i;
	*j = 0;
	*c = 0;
}

int	ft_strstr(const char *str, const char *to_find, int i)
{
	int	j;
	int	c;
	int	buff;

	ft_init(&i, &j, &c, &buff);
	while (str[i] || str[0] == '\0')
	{
		if (ft_strlen(to_find) > ft_strlen(str) - i)
		{
			return (0);
		}
		j = i;
		while (str[j] == to_find[c] && str[j] && to_find[c])
		{
			c++;
			j++;
		}
		if (c == ft_strlen(to_find))
		{
			return (i == buff);
		}
		i++;
		c = 0;
	}
	return (0);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	int	nb_supp;
	char	*new_chain;

	nb_supp = 0;
	if(ft_strstr(s1, set, 0))
		nb_supp += ft_strlen(set);
	if(ft_strstr(s1, set, ft_strlen(s1) - ft_strlen(set) - 1))
		nb_supp += ft_strlen(set);
	new_chain = malloc(ft_strlen(s1) - nb_supp + 1);
	new_chain[ft_strlen(s1) - nb_supp] = '\0';
	
}