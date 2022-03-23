#include <stdio.h>
#include <stdlib.h>

struct Address{
    char HouseNo[25];
    char City[25];
    char PinCode[25];

};
struct Employee{
    int Id;
    char Name[25];
    float Salary;
    struct Address Add;

};

int main()
{
    int i; struct Employee E;
    printf("\n Enter Employee E Id: ");
    scanf("%d", &E.Id);
    printf("\nEnter Employee E name: ");
    scanf("%s", &E.Name);
    printf("\nEnter Employee E Salaray: ");
    scanf("%ld", &E.Salary);
    printf("\nEnter Employee E HouseNo: ");
    scanf("%s", &E.Add.HouseNo);
    printf("\nEnter Employee E city: ");
    scanf("%s", &E.Add.City);
    printf("\nEnter Employee E PinCode: ");
    scanf("%s", &E.Add.PinCode);

    printf("\nEmployee id: %d", E.Id);
    printf("\nEmployee name: %s", E.Name);
    printf("\nEmployee salary: %ld", E.Salary);
    printf("\nEmployee HomeNo: %s", E.Add.HouseNo);
    printf("\nEmployee City: %s", E.Add.City);
    printf("\nEmployee PinCode: %s", E.Add.PinCode);





    return 0;
}
