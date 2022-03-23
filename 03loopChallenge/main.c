#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, j, k;
    printf("Give me the number of asteriks to be the base of the tree\n");
    scanf("%d", &a);

    for(i = 1; i <= a; i++){
        for(j = a; j > i; j--){
            printf(" ");
        }
        for(k = 1; k <= i; k++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
