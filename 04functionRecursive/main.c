#include <stdio.h>
#include <stdlib.h>

int main()
{
    //GCD
    int a, b;
    printf("Enter to numbers to find the GCD\n");
    scanf("%d %d", &a, &b);
    printf("The gdc is: %d", gdc(a,b));
    return 0;
}
int gdc(int m, int n){
    if(m ==n){
        return n;
    }
    else if(m > n){
        return gdc(m-n, n);
    }
    else{
        return gdc(m, n - m);
    }

}
