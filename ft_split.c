/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:03:43 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/02 14:04:22 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>

int compte_mot(char *str, char c)
{
    int compte;
    int i;

    compte = 0;
    i = 0;
    while (str[i])
    {
        if(str[i] == c)
        {
            compte++;
        }
        i++;
    }
    return compte;
}

void second_allocation(char *str, char c, char **tab)
{
    int i;
    int j;
    int buff;

    i = 0;
    j = 0;
    buff = 0;
    while (1)
    {
        if(str[i] == c || str[i] == '\0')
        {
            tab[j] = malloc((buff + 1) * sizeof(char));
            tab[j][buff] = '\0';
            buff = 0;
            j++;
            if(str[i] == '\0')
                break;
        }
        i++;
        buff++;
    }
}

char **ft_split(char *str, char c)
{
    char **tab;
    int i;
    int r;
    int j;

    i = 0;
    j = 0;
    r = 0;
    tab = malloc((compte_mot(str, c) + 2) * sizeof(char*));
    tab[compte_mot(str, c) + 1] = NULL;
    second_allocation(str, c, tab);
    while(str[i])
    {
        while(str[i] != c && str[i])
        {
            tab[r][j] = str[i];
            j++;
            if(str[i + 1] == c)
            {
                r++;
                j = 0;
            }
            i++;
        }
        if(str[i] != '\0')
            i++;
    }
    return (tab);
}

int main()
{
    char tab[] = "ouicnoncbon";
    char b = 'c';
    //ft_split(tab, 'c');
    printf("%c\n", ft_split(tab, b)[0][0]);
    printf("%c\n", ft_split(tab, b)[0][1]);
    printf("%c\n", ft_split(tab, b)[0][2]);
    printf("%c\n", ft_split(tab, b)[1][0]);
    printf("%c\n", ft_split(tab, b)[1][1]);
    printf("%c\n", ft_split(tab, b)[1][2]);
    printf("%c\n", ft_split(tab, b)[2][0]);
    printf("%c\n", ft_split(tab, b)[2][1]);
    printf("%c\n", ft_split(tab, b)[2][2]);
}
