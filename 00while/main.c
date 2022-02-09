#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, res;
    printf("Enter a number to find its factorial\n");
    scanf("%i", &n);
    i = 1;
    res = 1;

    while (i <= n){
        res*=i;
        i++;
    }
    printf("Factorial of %i is: %i\n", n, res);
    return 0;
}
