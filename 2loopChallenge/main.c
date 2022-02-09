#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, rev, rem, nConst;

    printf("Give me a number to reverse it\n");
    scanf("%d",&n);

    nConst = n;

    while ( n > 0){
        rem = n % 10;
        rev = rev*10 + rem;
        n = n /10;
    }
    printf("The reversed number of %d is %d\n", nConst, rev);

    if (nConst == rev){
        printf("It's a palindrome!!!\n");
    }
    else{
        printf("It's not a palindrome\n");
    }



}
