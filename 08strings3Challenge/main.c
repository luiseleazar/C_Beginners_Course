#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Upper-cases are bewteen 65 and 90
    //Lower-cases are between 97 and 122
    char a[20];
    char *p;

    printf("\nEnter a string: \n");
    gets(a);

    p = a; // of p = &c[0];

    while(*p != '\0')
    {
        if((*p >= 65) && (*p <= 90))
            printf("%c", *p+=32);
        else
        {
            if((*p >= 97) && (*p <= 122))
                printf("%c", *p-=32);
            else
                printf("%c", *p);
        }
        p++;
    }

}
