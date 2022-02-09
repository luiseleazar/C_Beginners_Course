#include <stdio.h>
#include <stdlib.h>

struct person{
    int age;
    int weight;
    char name[30];

};
int main()
{
    struct person *personPtr,person1;
    personPtr(struct person*) malloc(1024*sizeof(struct person));
    //personPtr = &person1;

    printf("\nEnter age: ");
    scanf("%d", &personPtr->age);
    printf("\nEnter weitght: ");


    scanf("%d", &personPtr->weight);
    printf("Age: %d: \n", personPtr->age);
    printf("Weight: %d: \n", personPtr->weight);

    return 0;
}
