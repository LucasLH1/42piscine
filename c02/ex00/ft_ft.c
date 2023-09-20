#include <stdio.h>

void	ft_ft(int *nbr)
{
    *nbr = 42;
}

int	main()
{
    int	*nbr; //valeur de la variable pointée
    int	number;//adresse de la variable pointée

    nbr = &number;//adresse du pointeur
    ft_ft(nbr);
    printf("%d", number);
}