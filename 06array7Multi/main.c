#include <stdio.h>
#include <stdlib.h>
#define row 4
#define col 4


int main()
{
    int a[row][col], b[row][col], c[row][col],r1,r2,c1,c2,i,j,k;

    printf("Enter the order of Matrix A: \n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the order of Matrix B: \n");
    scanf("%d%d",&r2,&c2);

    printf("Enter the elements of Matrix A\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of Matrix B\n");
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    //Printng Matrix A and B
    printf("\nMatrix A is:\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B is:\n");
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < r1;i++)
    {
        for(j = 0; j < c2; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nMatrix C is: \n");
    for(i = 0; i < r1;i++)
    {
        for(j = 0; j < c2; j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }



    return 0;
}
