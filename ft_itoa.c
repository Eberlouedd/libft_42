/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 00:14:44 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/04 16:29:13 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	nb_chiffre(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	p_dix(int n)
{
	long	result;
	int		i;

	i = 0;
	result = 1;
	while (i < n)
	{
		result *= 10;
		i++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*nb_chain;
	int		i;
	long	sub;
	int		signe;

	i = 0;
	sub = n;
	signe = 1;
	if (sub < 0)
	{
		sub *= -1;
		i = 1;
		signe = 0;
	}
	nb_chain = malloc(nb_chiffre(sub) + 2 - signe);
	nb_chain[nb_chiffre(sub) + 1 - signe] = '\0';
	if (!signe)
		nb_chain[0] = '-';
	while (i < nb_chiffre(n) + 1 - signe)
	{
		nb_chain[i] = (char)(sub / p_dix(nb_chiffre(n) - i - signe) + 48);
		sub %= p_dix(nb_chiffre(n) - i - signe);
		i++;
	}
	return (nb_chain);
}
