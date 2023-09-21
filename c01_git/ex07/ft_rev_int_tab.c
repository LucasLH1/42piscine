/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:11:50 by llahaye           #+#    #+#             */
/*   Updated: 2023/09/21 13:44:03 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
        int     i;
        int     tmp;

        i = 0;
        while (i < size / 2)
        {
                tmp = tab[i];
                tab[i] = tab[size - i - 1];
                tab[size - i - 1] = tmp;
                i++;
        }
}

int main()
{
        int tab[4] = {0, 1, 2, 3};
        int size = 4;

        ft_rev_int_tab(tab, size);
        printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
        return (0);
}

