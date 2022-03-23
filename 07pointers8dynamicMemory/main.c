#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int n, i;

    n = 10;

    p = (int *)malloc(n * sizeof(int));

    if(p ==NULL){
        printf("Memory NOT allocated\n");
        exit(0);
    }
    else{
        printf("Memory allocated Successfully using malloc\n");
        for(i=0; i<n; i++){
            p[i] = i+1;
        }
        printf("The elements in array are:\n");
        for(i=0;i<n;i++){
            printf("a[%d] = %d\n",i, p[i]);
        }
        printf("The size of pointer p is %d\n",sizeof(p));
        printf("The size of int is %d",sizeof(int));
    }
    return 0;
}
