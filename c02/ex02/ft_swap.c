#include <stdio.h>

void ft_swap(int *a, int *b)
{

    int t; //variable temporaire
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

