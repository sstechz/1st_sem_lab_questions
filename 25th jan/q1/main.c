#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max;
    printf("Enter the maximum limit : ");
    scanf("%d",&max);

    for(int i = 2; i<=max; i+=2)
        printf("%d ",i);

    printf("\n");
    for(int j = 1; j<=max; j+=2)
        printf("%d ",j);

    return 3;
}

