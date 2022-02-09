#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3];
    int *p;

    p = &a[0]; // p = a;
    *p = 10;


    printf("Address is %p \n", a);
    printf("Address is %p \n", p);
    printf("Value at a[0] is %d\n", *p);
    printf("Value at a[0] is %d\n", *(p+ 0));

    p++;
    *p = 20;
    printf("Address is %p \n", a);
    printf("Address is %p \n", p);
    printf("Value at a[1] is %d\n", *(a+1));
    printf("Value at a[1] is %d\n", *(p+ 0));

    p++;
    *p = 30;
    printf("Address is %p \n", a);
    printf("Address is %p \n", p);
    printf("Value at a[2] is %d\n", *(a+2));
    printf("Value at a[2] is %d\n", *(p+ 0));

    return 0;
}
