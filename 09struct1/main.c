#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int Id;
    char Name[25];
    int Age;
    long Salary;
};


int main()
{
    struct Employee E;

    printf("\n Enter Employee E Id: ");
    scanf("%d", &E.Id);

    printf("\nEnter Employee E name: ");
    scanf("%s", &E.Name);

    printf("\nEnter Employee E age: ");
    scanf("%d", &E.Age);

    printf("\nEnter Employee E Salaray: ");
    scanf("%ld", &E.Salary);


    printf("\nEmployee id: %d", E.Id);
    printf("\nEmployee name: %s", E.Name);
    printf("\nEmployee age: %d", E.Age);
    printf("\nEmployee salary: %ld", E.Salary);


    return 0;
}
