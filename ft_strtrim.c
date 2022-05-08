/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:31:03 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/09 00:32:23 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	debut(const char *chaine, const char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (chaine[i])
	{
		while (base[j])
		{
			if (base[j] == chaine[i])
				break ;
			j++;
		}
		if (j == ft_strlen(base))
			break ;
		j = 0;
		i++;
	}
	return (i);
}

int	fin(const char *chaine, const char *base)
{
	int	inter;
	int	i;
	int	j;
	int	mem;

	i = 0;
	j = 0;
	inter = 0;
	while (chaine[i])
	{
		while (base[j])
		{
			if (chaine[i] == base[j] && !inter)
			{
				mem = i;
				inter = 1;
			}
			j++;
		}
		if (j == ft_strlen(base))
			inter = 0;
		i++;
		j = 0;
	}
	return (mem - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		supp_compte;
	char	*new_chaine;
	int		i;
	int		j;

	supp_compte = (debut(s1, set) + (ft_strlen(s1) - fin(s1, set)));
	new_chaine = malloc(ft_strlen(s1) - supp_compte + 1);
	new_chaine[ft_strlen(s1) - supp_compte] = '\0';
	i = 0;
	j = debut(s1, set);
	while (i < ft_strlen(s1) - supp_compte)
	{
		new_chaine[i] = s1[j];
		i++;
		j++;
	}
	return (new_chaine);
}

int	main(void)
{
	printf("%s\n", ft_strtrim("tripouille x", " x"));
}
