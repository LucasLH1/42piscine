#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    if(*b != 0) {
    *a = *a / *b;
    *b = *a % *b;
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


