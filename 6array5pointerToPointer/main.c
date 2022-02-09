#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2;
    int *p;
    int **pp;

    p = &a;
    pp = &p;

    //Values
    printf("\n Value at a: %d", a);
    printf("\n Value at a: %d", *p);
    printf("\n Value at a: %d", **pp);

    //Address
    printf("\nAddress of int a is %p", &a);
    printf("\nAddress of int a is %p", p);
    printf("\nAddress of int a is %p", *pp);

    //Address of pointer of pointer
    printf("\nAddres of pointer p is %p", &p);
    printf("\nAddres of pointer p is %p", pp);
    return 0;
}
