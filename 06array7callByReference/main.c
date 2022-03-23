#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a= 20, b= 30;
    printf("\nIn main\nNumber 1: %d\nNumber 2: %d\n", a, b);
    swap(&a, &b);
    printf("\nIn main after:\nNumber 1: %d\nNumber 2: %d\n", a, b);
    return 0;
}
void swap(int *x, int*y)
{

    int temp;
    temp = *x;
    *x = *y;
    *y =temp;
    printf("\nIn SWAP:\nNumber 1: %d\nNumber 2: %d\n", *x, *y);
}
