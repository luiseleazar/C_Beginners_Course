#include <stdio.h>
#include <stdlib.h>


struct address{
    char hno[10], city[25];
    long pin;
    int street;

}A;
struct employee{
    char name[20], dept[20];
    int employeeId;
    float salary;
    struct address A;

}e;
int main()
{
    printf("\nEnter name: ");
    scanf("%s", e.name);
    printf("\nEnter Department: ");
    scanf("%s", e.dept);
    printf("\nEnter employee ID: ");
    scanf("%d", &e.employeeId);
    printf("\nEnter salay: ");
    scanf("%f", &e.salary);
    printf("\nEnter home number: ");
    scanf("%s", e.A.hno);
    printf("\nEnter City: ");
    scanf("%s", e.A.city);
    printf("\nEnter pin: ");
    scanf("%l", &e.A.pin);
    printf("\nEnter street: ");
    scanf("%d", &e.A.street);


    printf("\nEmployee name: %s", e.name);
    printf("\nEmployee Department: %s", e.dept);
    printf("\nEmployee ID: %d", e.employeeId);
    printf("\nEmployee Salary: %f", e.salary);
    printf("\nEmployee HomeNo: %s", e.A.hno);
    printf("\nEmployee City: %s", e.A.city);
    printf("\nEmployee PinCode: %l", e.A.pin);
    printf("\nEmployee street: %d", e.A.street);


    return 0;
}
