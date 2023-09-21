/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:25:18 by llahaye           #+#    #+#             */
/*   Updated: 2023/09/21 00:27:36 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		t;

	t = 0;
	t = *b;
	*b = *a;
	*a = t;
}

int main()
{
    int a;
    int b;

    a = 41;
    b = 42;

    printf("Avant a = %d et b = %d\n", a, b);
    ft_swap(&a,&b);
    printf("Apres a = %d et b = %d\n", a, b);
}
