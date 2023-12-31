/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:30:55 by llahaye           #+#    #+#             */
/*   Updated: 2023/09/21 13:00:07 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmp;

	if (*b != 0)
	{
		tmp = *a;
		*a = *a / *b;
		*b = tmp % *b;
	}
}

int main()
{
    int a;
    int b;

    a=11;
    b=2;

    ft_ultimate_div_mod(&a,&b);
    printf("%d\n", a);
    printf("%d\n", b);

}
