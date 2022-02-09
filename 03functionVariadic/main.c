#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
double average(int num, ...){

    va_list arguments;
    double sum = 0;

    va_start (arguments, num);

    for(int i=0; i<num;i++)
    {
        sum += va_arg (arguments, double);
    }
    va_end(arguments);

    return sum / num;

}
int main()
{
    printf("The average of 3 = %.2f\n", average(3, 8.5, 10, 9.6));
    return 0;
}

