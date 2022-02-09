#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
void update(int*a,int*b)
{
    int temp;
    temp = *a;
    *a = *a + *b;

    if(temp < *b)
        *b = *b - temp;
    else
    *b = temp - *b;
}
