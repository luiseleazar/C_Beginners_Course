#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("testing.txt", "w");
    if(fptr == NULL){
        printf("Error creating the file\n");
        exit(1);
    }
    printf("Enter a number: \n");
    scanf("%d", &num);
    fprintf(fptr, "%d", num);
    fclose(fptr);

    if((fptr == fopen("testing.txt","r")) == NULL)
    {
        printf("Error! opening file\n");
        exit(1);
    }
    fscanf(fptr,"%d",&num);
    printf("Value of n form file is %d", num);
    fclose(fptr);
    return 0;
}
