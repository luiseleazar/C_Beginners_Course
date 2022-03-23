#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], i,n, key;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);


    printf("Enter key element: ");
    scanf("%d", &key);


    for(i=0;i<10;i++){
        if(key == a[i])
        {
            printf("Its here, in a[%d]\n", i);
            exit(0);
        }

    }
    printf("Unsuccessfull search\n");

    return 0;
}

