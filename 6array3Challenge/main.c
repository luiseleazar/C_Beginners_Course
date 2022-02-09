#include <stdio.h>
#include <stdlib.h>
void selection_asc(int a[], int n);
void selection_des(int a[], int n);
int main()
{
    int a[10], n, i;

    printf("Enter the number of elements\n");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for(i=0; i < n; i++){
        scanf("%d", &a[i]);
    }

    selection_asc(a, n);
    selection_des(a, n);
    return 0;
}

void selection_asc(int a[], int n)
{
    int i, j, k, temp;
    for(i=0;i<n;i++)
    {
        j = i;
        for(k=i+1;k<n;k++)
        {
            if(a[k]<a[j])
                j=k;
        }
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("\nThe sorted elements are \n");
    for(i=0; i < n; i++)
        printf("%d ", a[i]);
    return;
}
void selection_des(int a[], int n)
{
    int i, j, k, temp;
    for(i=0;i<n;i++){
        j = i;
        for(k=i+1;k<n;k++){
            if(a[k]>a[j])
                j=k;
        }
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("\nThe sorted elements are \n");
    for(i=0; i < n; i++)
        printf("%d ", a[i]);
    return;
}
