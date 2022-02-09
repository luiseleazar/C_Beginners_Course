#include <stdio.h>
#include <stdlib.h>

int marks_summation(int number_of_students, int* marks, char gender);
int main()
{
    int marks = {1,2,3,4,5};
    int sum;

    marks_summation(5,marks,'g');
    printf("The sum is %d", sum);
    return 0;
}
int marks_summation( int number_of_students, int* marks,char gender)
{
    int s=0, i=0;
    //int *p = &marks[0];

    if(gender == 'g') i++;
    for(; i < number_of_students; i+=2)
        {
        s+= marks[i];
    }

    if(gender == 'b')
    for(; i < number_of_students; i+=2){
       s+= marks[i];
    }
    return s;
}
