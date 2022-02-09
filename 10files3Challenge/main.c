#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch, a[50];
    FILE *fp;
    fp = fopen("challenge.txt", "a+");
    if(fp == NULL)
    {
        printf("Unable to open\n");
        getchar();
        exit(1);

    }
    printf("The original text is: \n");
    while(!feof(fp))
    {
        ch = fgetc(fp);
        putchar(ch);
    }



    printf("\nEnter text to append:\n");
    gets(a);
    fprintf(fp, "%s",a);

    printf("\nFile text after appended text is: \n");
    rewind(fp);
    while(!feof(fp))
    {
        ch = fgetc(fp);
        putchar(ch);
    }
    fclose(fp);



    return 0;
}
