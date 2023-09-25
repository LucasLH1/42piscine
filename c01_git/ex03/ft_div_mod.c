/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:28:29 by llahaye           #+#    #+#             */
/*   Updated: 2023/09/21 00:30:09 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int main()
{
    int a;
    int b;
    int div;
    int mod;

    a = 11;
    b = 5;
    ft_div_mod(a, b, &div, &mod);
    printf("%d\n", div);
    printf("%d", mod);
}
