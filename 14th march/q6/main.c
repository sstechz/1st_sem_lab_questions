#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    printf("Enter the no of rows : ");
    int rows;
    scanf("%d",&rows);

    for(i=1;i<=rows;++i){
        //before space
        for(j=0;j<rows-i;++j){
            printf(" ");
        }
        for(k=0;k<i;++k){
            printf("* ");
        }
        printf("\n");
    }

    return 3;
}
