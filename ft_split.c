/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:03:43 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/10 04:16:50 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	ft_init(int *i, int *j, int *c)
{
	*i = 0;
	*j = 0;
	*c = 0;
}

int	compte_mot(const char *str, char c)
{
	int	compte;
	int	i;
	int	supp_end_start;

	compte = 0;
	i = 0;
	supp_end_start = 0;
	if (str[0] == '\0')
		return (0);
	if (str[0] == c)
		i++;
	if (str[ft_strlen(str) - 1] == c)
		supp_end_start++;
	while (str[i])
	{
		if (str[i] == c && str[i - 1] != c)
			compte++;
		i++;
	}
	return (compte - supp_end_start + 1);
}

void	second_allocation(const char *str, char c, char **tab)
{
	int	i;
	int	j;
	int	buff;

	ft_init(&i, &j, &buff);
	if (str[0] == c)
		i++;
	while (1)
	{
		if ((str[i] == c || str[i] == '\0') && str[i - 1] != c && i - 1 > 0)
		{
			tab[j] = malloc((buff + 1) * sizeof(char));
			tab[j][buff] = '\0';
			buff = 0;
			j++;
			if (str[i] == '\0')
				break ;
		}
		else if (str[i] == '\0' && str[i - 1] == c)
			break ;
		i++;
		if (str[i - 1] != c)
			buff++;
	}
}

void	ft_norm(int bool, int *r, int *j)
{
	if (bool)
	{
		*r += 1;
		*j = 0;
	}
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	int		i;
	int		r;
	int		j;

	ft_init(&i, &j, &r);
	tab = malloc((compte_mot(str, c) + 1) * sizeof(char *));
	tab[compte_mot(str, c)] = NULL;
	if (compte_mot(str, c) > 0)
		second_allocation(str, c, tab);
	while (str[i])
	{
		while (str[i] != c && str[i])
		{
			tab[r][j] = str[i];
			j++;
			ft_norm(str[i + 1] == c, &r, &j);
			i++;
		}
		if (str[i] != '\0')
			i++;
	}
	return (tab);
}
