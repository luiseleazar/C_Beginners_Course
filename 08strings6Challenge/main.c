#include <stdio.h>
#include <stdlib.h>


//ASCII 0-9 is 48-57
int main()
{
    char *s;
    int len, i, j;
    s = malloc(1024*sizeof(char));
    scanf("%s", s);
    len = strlen(s);
    int arr[10];
    for(i =0; i < 10; i++)
    {
        arr[i] = 0;
    }
    for(i=0;i<len;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            arr[(int)(s[i]-'0')]++;
        }
    }
    for(i=0; i < 10;i++){
        printf("%d ", arr[i]);
    }
    printf('\n');
    free(s);

    return 0;
}
