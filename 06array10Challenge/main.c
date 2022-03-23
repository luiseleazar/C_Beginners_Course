#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1000], num, i;

    printf("Enter the number of elements \n");
    scanf("%d", &num);
    printf("Enter the elements\n");
    for(i = 0; i < num; i++)
        scanf("%d", &arr[i]);

    //Reversing
    int *lp, *rp, temp;
    lp = arr;

    for(i = 0; i< num;i++){
        if(i==num-1){
            rp = (arr + i);
        }
    }
    while(lp < rp){
        temp = *rp;
        *rp = *lp;
        *lp = temp;
        rp--;
        lp++;
    }

    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);
    return 0;
}
