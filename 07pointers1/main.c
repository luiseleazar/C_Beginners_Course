#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;

    //Values
    printf("%d\n",a);
    printf("%d\n",*p);


    //a address
    printf("%p\n", &a);
    printf("%p\n",p);


    //p address
    printf("%p\n", &p);
    return 0;
}
