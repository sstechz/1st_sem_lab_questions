#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter the size of the array -->\n");
    scanf("%d",&n);

    int A[n];
    int *p=A;
    printf("\nEnter the value of the elements inside array A and last value as the search element -->\n");
    for(i=0;i<n;++i){
        printf("A[%d] is : ",i);
        scanf("%d",&*(p+i));
    }

    int count=0;
    for(i=0;i<n-1;++i){
        if(*(p+i)==*(p+n-1)){
           printf("\n%d is the %dth element of the array A\n",*(p+n-1),i+1);
           break;
        }
        else ++count;
    }
    if(count==(n-1)) printf("\n%d not found in the array\n",*(p+n-1));

    return 3;
}
