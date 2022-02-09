#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compare(char[], char[]);
void concat(char[], char[]);
int string_len(char*);
void copy(char *, char*);

int main()
{
    char str1[20], str2[20];
    printf("\nEnter the two strings\n");
    gets(str1);
    gets(str2);

    if(compare(str1, str2) == 0){
        printf("\nStrings %s and %s are equal\n", str1, str2);
    }
    else{
        printf("\nStrings %s and %s are not equal\n", str1, str2);
    }
    //Concat
    concat(str1, str2);

    //len
    int len = string_len(str1);
    printf("\nThe length of %s is %d", str1, len);

    //Copy
    copy(str1, str2);

    return 0;
}

//Compare function
int compare(char str1[], char str2[])
{
    int i = 0;
    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0' || str2[i] == '\0')
            break;
        i++;
    }
    if(str1[i] == '\0' && str2[i] =='\0')
        return 0;
    else
        return -1;
}

//Concate
void concat(char str1[], char str2[])
{
    int i;
    i = strlen(str1);
    for(int j =0; str1[j] != '\0'; i++, j++)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
    printf("\nThe concatenated is %s",str1);

}
int string_len(char *str)
{
    int i=0;
    while(*str != '\0')
    {
        i++;
        str++;
    }
    return i;

}
//Copy function
void copy(char *str1, char*str2)
{
    int i = 0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("\nThe copied string is %s", str2);
}

