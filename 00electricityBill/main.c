#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w;
    float bill;
    printf("How many kWh have you consumed this month?: \n");
    scanf("%i", &w);

    if (w <= 200){
        bill = 0.5 * w;
        printf("Your electricity bill is: $%.2f\n", bill);
    }
    else if (w > 201 && w <= 400) {
        bill = (200 * 0.5 ) + ((w - 200)*0.65);
        printf("Your electricity bill is: $%.2f\n", bill);
    }
    else if (w > 401 && w <= 600){
        bill = (200 * 0.5 ) + (200*0.65) + ((w - 400) * 0.8);
        printf("Your electricity bill is: $%.2f\n", bill);
    }
    else if (w > 600){
        bill = (200 * 0.5) + (200 * 0.65) + (200 * 0.8) + ((w - 600) * 0.9);
        printf("Your electricity bill is: $%f\n", bill);
    }
    else{
        printf("No Valid Option\n");
    }
}
