/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 00:14:44 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/04 01:16:56 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	nb_chiffre(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	p_dix(int n)
{
	int	result;
	int	i;

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

	i = 0;
	sub = n;
	if (sub < 0)
	{
		nb_chain = malloc(nb_chiffre(sub) + 2);
		nb_chain[0] = '-';
		sub *= -1;
		i = 1;
		nb_chain[nb_chiffre(sub) + 1] = '\0';
	}
	else
	{
		nb_chain = malloc(nb_chiffre(sub) + 1);
		nb_chain[nb_chiffre(sub)] = '\0';
	}
	while (i < nb_chiffre(n) + 1)
	{
		nb_chain[i] = (char)(sub / p_dix(nb_chiffre(n) - i) + 48);
		printf("%ld\n", sub);
		sub %= p_dix(nb_chiffre(n) - i);
		i++;
	}
	return (nb_chain);
}

int	main(int argc, char **argv)
{
	printf("%s\n", ft_itoa(atoi(argv[1])));
}
