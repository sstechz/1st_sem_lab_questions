#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, i, j;
    printf("Enter the range from n1 to n2 : ");
    scanf("%d %d",&n1,&n2);

    if(n1==1)
        n1 = 2;

    for(i = n1; i <= n2; ++i)
    {
        for(j = 2; j <= i; ++j)
        {
            if(!(i%j))
                break;
        }

        if(i==j)
            printf("%d ",i);
    }

    return 3;
}
