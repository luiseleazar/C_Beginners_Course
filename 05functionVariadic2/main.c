#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum(int count, ...){

    va_list arguments;
    int s = 0;

    va_start (arguments, count);

    for(int i=0; i<count;i++)
    {
        s += va_arg (arguments, int);
    }
    va_end(arguments);

    return s;

}
int max(int count, ...){

    va_list arguments;
    int mx = 0;
    int temp;

    va_start(arguments, count);

    for(int i = 0;i < count;i++)
    {
        temp = va_arg(arguments, int);
        if (temp > mx){
            mx = temp;
        }
    }
    va_end(arguments);
    return mx;
}
int min(int count, ...)
{
    va_list arguments;
    int mn = 1000001;
    int temp;

    va_start(arguments, count);

    for(int i = 0;i < count;i++)
    {
        temp = va_arg(arguments, int);
        if (temp < mn){
            mn = temp;
        }
    }
    va_end(arguments);
    return mn;
}
int main()
{
    printf("The sum is %d\n", sum(4, 1, 2, 3, 4));
    printf("The max is %d\n", max(3, 11, 31, 14));
    printf("The min is %d\n", min(3, 100, 16, 114));
    return 0;
}
