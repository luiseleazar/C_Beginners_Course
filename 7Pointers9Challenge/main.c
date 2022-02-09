#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    int *arr;


    scanf("%d", &n);

    arr = (int*)malloc(n*sizeof(int));

    if(arr == NULL){
        printf("Memory not allocated\n");
        exit(0);
    }
    else{
        for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        }
        for(int i = 0; i<n; i++){
            sum+=arr[i];
        }
        printf("The sum is %d", sum);
    }

    return 0;
}
