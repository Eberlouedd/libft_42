/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:03:43 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/11 19:31:15 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_init(int *j, int *c)
{
	*j = 0;
	*c = 0;
}

static int	compte_mot(const char *str, char c)
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

static void	second_allocation(const char *str, char c, char **tab)
{
	int	i;
	int	j;
	int	buff;

	ft_init(&j, &buff);
	i = 0;
	if (str[0] == c)
		i++;
	while (1)
	{
		if ((str[i] == c || str[i] == '\0') && str[i - 1] != c && i - 1 > 0)
		{
			tab[j] = malloc((buff + 1) * sizeof(char));
			if (!tab)
				return ;
			tab[j++][buff] = '\0';
			buff = 0;
			if (str[i] == '\0')
				break ;
		}
		else if (str[i] == '\0' && str[i - 1] == c)
			break ;
		if (str[++i - 1] != c)
			buff++;
	}
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	int		r;
	int		j;

	if (!str)
		return (NULL);
	ft_init(&j, &r);
	tab = malloc((compte_mot(str, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	tab[compte_mot(str, c)] = NULL;
	if (compte_mot(str, c) > 0)
		second_allocation(str, c, tab);
	while (*str)
	{
		while (*str && *str != c)
		{
			tab[r][j++] = *str;
			if (*++str == c && (r++ || 1))
				j = 0;
		}
		if (*str != '\0')
			str++;
	}
	return (tab);
}
