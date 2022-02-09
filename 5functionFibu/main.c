#include <stdio.h>
#include <stdlib.h>
int fibu(int num);
int main()
{
    int f;
    printf("Enter the place of fibu series you want to know\n");
    scanf("%d", &f);
    printf("The %d place on the fibu series is %d", f, fibu(f));
    return 0;
}
int fibu (int num){
    /*int a = 0;
    int b = 1;
    int i = 2;
    int c;
    if(num == 1)
        return 0;
    else if(num == 2)
        return 1;
    else{
        while(num > i)
        {
            c = a + b;
            i++;
            a = b;
            b = c;
        }
        return c;
    }*/

    if (num ==1)
        return 0;
    if (num == 2)
        return 1;
    else
        return (fibu(num-1) + fibu(num-2));

}
