#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], b[10], *p, *q, i;
    for(i=0;i < 3;i++)
    {
        printf("Enter an element for first set\n: ");
        scanf("%d", &a[i]);
    }

    p =a; //p = &a[0]
    for(i = 0; i<3; i++)
    {
        printf("Enter an element for second set\n: ");
        scanf("%d", &b[i]);
    }
    q = b; //q = &b[0]

    printf("The address of p is %p\n",p);
    printf("The address of a is %p\n",a);
    printf("The address of q is %p\n",q);
    printf("The address of b is %p\n",b);

    //p arithmetic
    printf("\nValue at p that is a[0]: %d", *p);
    p++;
    printf("\nValue at p that is a[1]: %d", *p);
    p=a;
    p+=2;
    printf("\nValue at p that is a[2]: %d", *p);

    //q arithmetic
    printf("\nValue at q that is b[0]: %d", *q);
    q++;
    printf("\nValue at q that is b[1]: %d", *q);
    q++;
    printf("\nValue at q that is b[2]: %d", *q);


    p =a;
    q = b;
    //Sum of a elements
    printf("\nThe sum of a elements is %d",(*p)+(*p+1)+(*p+2));
    return 0;
}
