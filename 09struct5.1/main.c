#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

struct prices {
    int m[3];
};
struct item{
    char name[20];
    struct prices p;
    char category[20];
};
int main()
{
    struct item it[3];
    int i, j;

    for(i = 0; i < 3; i++)
    {
        printf("Enter a name: \n");
        scanf("%s", it[i].name);
        printf("Enter the prices: \n");
        for(j = 0; j < 3; j++){
            scanf("%d", &it[i].p.m[j]);
        }
        printf("Enter the category: \n");
        scanf("%s", it[i].category);

    }

    printf("Name\t\t Prices\t\tCategory\n");
    printf("     \tm1\tm2\tm3\t         \n");
    for(i = 0; i < 3; i++)
    {
        printf("%s\t", it[i].name);
        for(j = 0; j < 3;j++)
        {
            printf("%d\t", it[i].p.m[j]);
        }

        printf("%s\n", it[i].category);
    }

    return 0;
}
