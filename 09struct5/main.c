#include <stdio.h>
#include <stdlib.h>

struct prices {
    int m1, m2, m3;
};
struct item{
    char name[20];
    struct prices p;
    char category[20];
};
int main()
{
    struct item it[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter a name: \n");
        scanf("%s", it[i].name);
        printf("Enter the prices: \n");
        scanf("%d%d%d", &it[i].p.m1, &it[i].p.m2, &it[i].p.m3);
        printf("Enter the category: \n");
        scanf("%s", it[i].category);

    }

    printf("Name\t\t Prices\t\tCategory\n");
    printf("     \tm1\tm2\tm3\t         \n");
    for(i = 0; i < 3; i++)
    {
        printf("%s\t", it[i].name);
        printf("%d\t", it[i].p.m1);
        printf("%d\t", it[i].p.m2);
        printf("%d\t", it[i].p.m2);
        printf("%s\n", it[i].category);
    }

    return 0;
}
