#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp,*fail, *pass;
    char a[20];
    int choice=1, score;

    fp = fopen("test.txt", "w");
    if(fp == NULL){
        printf("Unable to open");
        getchar();
        exit(0);
    }

    fprintf(fp,"EmpName\t\tIQ Score\n");
    do
    {
        printf("\Enter the name of the candidate: ");
        scanf("%s", a);
        printf("\nEnter the IQ score: ");
        scanf("%d", &score);
        fprintf(fp,"%s\t\t%d\n", a, score);
        printf("\nTo add more press 1 (else exit)");
        scanf("%d", &choice);
    }while(choice ==1);
    fclose(fp);

    fp = fopen("test.txt", "r");
    printf("\nThe content of the file is: \n");
    fscanf(fp, "EmpName\t\tIQ Score\n");
    while(!feof(fp))
    {
        fscanf(fp,"%s\t\t%d\n", a, &score);
        printf("%s\t\t%d\n", a, score);
    }
    fclose(fp);


    fp = fopen("test.txt", "r");
    pass = fopen("pass.txt", "w");
    fail = fopen("fail.txt", "w");
    scanf(fp,"EmpName\t\tIQ Score\n");
    fprintf(pass,"EmpName\t\tIQ Score\n");
    fprintf(fail,"EmpName\t\tIQ Score\n");

    while(!feof(fp))
    {
        fscanf(fp,"%s\t\t%d\n",a,&score);
        if(score >= 90)
        {
            fprintf(pass,"%s\t\t%d\n", a, score);
        }
        else{
            fprintf(fail,"%s\t\t%d\n", a, score);
        }
    }
    fclose(fp);
    fclose(pass);
    fclose(fail);

    pass = fopen("pass.txt", "r");
    printf("The content of the pass file is: \n");
    fscanf(pass,"EmpName\t\tIQ Score\n");
    while(!feof(pass))
    {
        fscanf(pass,"%s\t\t%d\n", a, &score);
        printf("%s\t%d\n",a,score);
    }
    fclose(pass);


    fail = fopen("fail.txt", "r");
    printf("The content of the fail file is: \n");
    fscanf(fail,"EmpName\t\tIQ Score\n");
    while(!feof(fail))
    {
        fscanf(fail,"%s\t\t%d\n", a, &score);
        printf("%s\t%d\n",a,score);
    }
    fclose(fail);


    return (0);
}
