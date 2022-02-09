#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter two numbers to swap them\n");
    scanf("%d", &a);
    scanf("%d", &b);
    swap(a,b);
    return 0;
}
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Now a = %d and b = %d", a, b);


}
