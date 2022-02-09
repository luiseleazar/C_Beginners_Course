#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;

    for(i = 'a'; i <= 'z'; i++)
        printf("Letter: %c has the ASCII code: %d\n", i, i);
    return 0;
}
