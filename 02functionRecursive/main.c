#include <stdio.h>
#include <stdlib.h>

int sum(int n);
int fact(int n);
int main()
{
    int number, res, factorial;
    printf("Enter a number to know its sum!\n");
    scanf("%d", &number);cumbersome
    res = sum(5);
    printf("The sum of %d is %d\n", number, res);
    factorial = fact(number);
    printf("The factorial %d is %d", number, factorial);
    return 0;
}
int sum(int n){
    if(n != 0)
        return n + sum(n-1);
    else
        return n;

}
int fact(int n){
    if(n != 1)
        return n * fact(n-1);
    else
        return n;


}
