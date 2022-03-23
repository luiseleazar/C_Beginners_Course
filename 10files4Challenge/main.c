#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *fp, *ft;
    fp = fopen("source.txt","r");
    ft = fopen("target.txt", "w");

    if(fp==NULL || ft == NULL){
        printf("Unable to open files\n");
        exit(0);
    }

    printf("\nContent of source file is  \n");
    while(!feof(fp))
    {
        ch = getc(fp);
        putchar(ch);
        fprintf(ft,"%c", ch);
    }
    fclose(fp);
    fclose(ft);



    ft = fopen("target.txt", "r");
    printf("\nContent of target file is  \n");
    while(!feof(ft))
    {
        ch = getc(ft);
        putchar(ch);
    }
    fclose(ft);
    getchar();
    return 0;
}
