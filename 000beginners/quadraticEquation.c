#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c;
    float r1, r2, det;

    printf("Introduce the 3 coefficient from your equation\n");
    printf("Enter the coefficient in x^2:  \n");
    scanf("%i", &a);
    printf("Enter the coefficient in x: \n");
    scanf("%i", &b);
    printf("Enter the constant: \n");
    scanf("%i", &c);
    printf("Your equation is: (%i)X^2 + (%i)X + (%i)\n", a, b, c);

    printf("Determining Roots\n");

    det = (b * b) - (4 * a * c);
    r1 = ((-b) + sqrt(det)) / (2 * a);
    r2 = ((-b) - sqrt(det)) / (2 * a);

    printf("Root x1 is equal to: %.2f\n", r1);
    printf("Root x2 is equal to: %.2f\n", r2);
    printf("Det is: %f\n", det);

    if(det > 0){
        printf("Two real roots\n");
    }
    else if(det < 0){
        printf("Two imaginary roots\n");
    }
    else{
        printf("One real root *imaginary root is possible\n");
    }


    return 0;
}
