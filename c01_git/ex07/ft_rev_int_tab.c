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

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	*tab = tmp;
	i = size;

	while (i > j)
	{
		tab[i]=tmp[i];
		printf("%d",*tab[i]);
		i--;
		j++;
	}
}

int main()
{
	int arr = {10, 20, 30};
	ft_rev_int_tab(arr, 2);
}

