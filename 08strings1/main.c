#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[20], str2[20];
    int len;

    printf("Enter two strings");
    gets(str1);
    gets(str2);

    if(strcmp(str1, str2) == 0){
        printf("Strings %s and %s are equal\n", str1, str2);
    }
    else{
        printf("Strings %s and %s are not equal\n", str1, str2);
    }

    //Concat
    strcat(str1, str2);
    printf("The concanated strings is %s\n", str1);

    len = strlen(str1);
    printf("The lenght of %s is %d\n", str1, len);

    //Copy
    strcpy(str1, str2);
    printf("The copied string is %s", str1);


    return 0;
}
