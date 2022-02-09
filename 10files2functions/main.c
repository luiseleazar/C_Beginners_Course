#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *fp;
    fp = fopen("test.txt", "r");
    if(fp == NULL)
    {
        printf("Unable to open\n");
        exit(1);

    }
    printf("The original text is \n");
    while((ch=fgetc(fp))!= EOF)
    {
        putchar(ch);
    }
    rewind(fp);
    while((ch=fgetc(fp))!=EOF)
    {
        printf("\nFtell position and its character: %ld ", ftell(fp));
        putchar(ch);
        getchar();
    }
    fclose(fp);
    return 0;
}
