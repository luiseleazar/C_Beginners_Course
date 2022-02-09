#include <stdio.h>
//int calc_iva(int value, int iva = 100);
int main()
{
    int result;
    result = calc_iva(10, 16);
    printf("%d", result);

    return 0;
}
int calc_iva(int value, int iva = 100)
{
    return value * iva;
}
