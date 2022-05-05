/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:03:43 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/04 16:16:26 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	compte_mot(const char *str, char c)
{
	int	compte;
	int	i;

	compte = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			compte++;
		}
		i++;
	}
	return (compte);
}

void	second_allocation(const char *str, char c, char **tab)
{
	int	i;
	int	j;
	int	buff;

	i = 0;
	j = 0;
	buff = 0;
	while (1)
	{
		if (str[i] == c || str[i] == '\0')
		{
			tab[j] = malloc((buff + 1) * sizeof(char));
			tab[j][buff] = '\0';
			buff = 0;
			j++;
			if (str[i] == '\0')
				break ;
		}
		i++;
		buff++;
	}
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	int		i;
	int		r;
	int		j;

	i = 0;
	j = 0;
	r = 0;
	tab = malloc((compte_mot(str, c) + 2) * sizeof(char *));
	tab[compte_mot(str, c) + 1] = NULL;
	second_allocation(str, c, tab);
	while (str[i])
	{
		while (str[i] != c && str[i])
		{
			tab[r][j] = str[i];
			j++;
			if (str[i + 1] == c)
			{
				r++;
				j = 0;
			}
			i++;
		}
		if (str[i] != '\0')
			i++;
	}
	return (tab);
}
