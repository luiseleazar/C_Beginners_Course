#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dim[2][3][2];
    printf("Enter the values\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 2; k++){
                scanf("%d", &dim[i][j][k]);
            }
        }
    }

    printf("The values are \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 2; k++){
                printf("dim[%d][%d][%d] = %d\n",i,j,k, dim[i][j][k]);
            }
        }

    }
    return 0;
}
