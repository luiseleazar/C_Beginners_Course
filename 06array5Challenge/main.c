#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], i, n, j, temp, key, low, high, mid, flag = 0;


    printf("Enter the number of elements of array\n");
    scanf("%d", &n);

    printf("Enter the elements\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter your key number\n");
    scanf("%d", &key);

    low = 0;
    high = n-1;

    while(low <= high){
       mid = (high + low) /2;
       if (key == a[mid])
        {
            printf("Successfull at a[%d])\n", mid);
            flag = 1;
            break;
       }
       else if (key<a[mid]){
            high = mid - 1;
       }
       else{
            low = mid + 1;
       }
    }
    if(flag == 0){
        printf("Element not found\n");
    }

    return 0;
}
