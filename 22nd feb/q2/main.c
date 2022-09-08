#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5];
    int B[5];
    int *p=&A[0];
    int *q=&B[0];

    printf("Enter the value of 5 elements inside array A -->\n");
    for(int i=0;i<5;++i){
        p=&A[i];
        scanf("%d",&*(p));
        //ALSO WRITTEN AS
        //scanf("%d",&*(p+i));
    }

    printf("Enter the value of 5 elements inside array B -->\n");
    for(int j=0;j<5;++j){
        q=&B[j];
        scanf("%d",&*(q));
    }

    //HERE COMPAIRING PROGRAM BEGINS
    int count=0;
    for(int k=0;k<5;++k){
        p=&A[k];
        q=&B[k];
        if(*p == *q){
            count=count+1;
            continue;
        }
        else{
            printf("unequal\n");
            break;
        }
    }
    if(count==5) printf("equal\n");

    return 3;
}
