#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    printf("Enter a number to know its multiplication table\n");
    scanf("%d", &n);

    /*printf("Table of %d\n", n);
    for (i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, i*n);
    }*/

    printf("Mult. tables of numbers from 1 to %d\n", n);

    for(i = 1; i <= n; i++){
        printf("\nTable of %d:\n", i);
        for(j = 0; j <= 10; j++){
            printf("%d x %d = %d\n", n, j, j*i);
        }
    }
    return 0;
}
