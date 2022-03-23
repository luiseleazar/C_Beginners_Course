#include <stdio.h>
#include <stdlib.h>

void swap(int*x,int*y);
int main()
{
    int n1, n2;
    printf("Enter to elements to swap them\n");
    scanf("%d%d", &n1, &n2);
    printf("Before swap\nnumber 1: %d\nnumber 2: %d\n", n1, n2);
    swap(&n1,&n2);

    printf("After swap\nnumber 1: %d\nnumber 2: %d\n", n1, n2);

    return 0;
}
void swap(int*x, int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\n\nSwap func\nnumber 1: %d\nnumber 2: %d\n",*x, *y);

}
