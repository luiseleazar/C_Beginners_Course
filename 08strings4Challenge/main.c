#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c\n", &ch);
    char s[30];
    scanf("%[^\n]%*c", &s);
    char sen[30];
    scanf("\n");
    scanf("%[^\n]*c",&sen);


    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
}
