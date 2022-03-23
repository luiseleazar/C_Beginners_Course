#include <stdio.h>
#include <stdlib.h>
//Bubble Sort
int main()
{
    int a[10], i, j, n, temp;
    printf("Enter the numbers o elements to be sorted: \n");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter element for %d position: ", i+1);
        scanf("%d", &a[i]);
    }

    //Sorting a[] in ascender order
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){

            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted numbers are: \n");
    for(i =0; i < n; i++){
        printf("a[%d] = %d\n", i, a[i+1]);
    }

    return 0;
}
