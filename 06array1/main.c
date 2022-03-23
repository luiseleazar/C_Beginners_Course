#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]; //Static, 1-Dimension arrray
    int b[5];
    //Type and size of the array cannot be changed once it is declared
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    //Reading a single element
    printf("Enter an int into a[3]\n");
    scanf("%d", &a[3]);

    //Reading a group of elements
    for(int i=0;i < 5; i++){
        printf("Enter an int into b[%d]: ", i);
        scanf("%d", &b[i]);
    }
    //Printing a group of elements
    for(int i= 0; i < 5;i++){
        printf("b[%d] = %d\n", i, b[i]);
    }


    printf("Memory location of array a:\n%d\n%d\n%d\n", &a[0], &a[1], &a[2]); //Printing memory location
    //Each element is about 4 bytes
    return 0;
}
