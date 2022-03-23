#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5], i, j, r, c, sum;

    printf("Enter the elements the n of rows and n of columns\n");
    scanf("%d%d", &r, &c);

    printf("Enter the elements\n");
    for(i = 0; i < r; i++){
        for(j = 0 ; j < c;j++){
            printf("Enter the element of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }
    printf("The sum is %d", sum);

    return 0;
}
