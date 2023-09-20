#include <stdio.h>

int main()
{
    int age;
    age = 25;

    int *ptr1;

    int **ptr2;

    ptr1 = &age;

    ptr2 = &ptr1;

    printf("Adresse de age : %x\n", ptr1);
    printf("Valeur de age : %x\n ", *ptr1);
    printf("Adresse de age : %x\n", ptr2);
    printf("Valeur de age : %x\n ", **ptr2);

}
