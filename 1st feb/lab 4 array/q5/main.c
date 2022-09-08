#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    int a[15]={0,1,2,3,1,4,6,7,2,9,1,1,2,3,4};
    for(i=0;i<15;++i){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<15;++i){
        int host=0,end=0;
        for(k=0;k<i;++k){
            if(a[k]==a[i]){
                end=1;
                break;
            }
        }
        if(end==0){
            for(j=0;j<15;++j){
                if(a[j]==a[i])
                    ++host;
            }
                printf("Occurence of %d is %d times\n",a[i],host);
        }
    }
    return 0;
}
