#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int nc = 0, nw = 0, ns = 0;
    FILE * fp;
    fp = fopen("source.txt", "r");
    if(fp == NULL)
    {
        printf("Unable to open the file\n");
        exit(0);
    }
    while((ch=fgetc(fp)) != EOF)
    {
        if(ch == ' ')
            nw++;
        if(ch == '.')
        {
            nw++;
            ns++;
        }
        nc++;
    }
    printf("Number of char : %d\n", nc);
    printf("Number of words: %d\n", nw);
    printf("Number of sentences: %d\n", ns);


    fclose(fp);
    return 0;
}
