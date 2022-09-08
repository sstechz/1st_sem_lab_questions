#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array --> ");
    scanf("%d",&n);

    int A[n];
    int *p=A;
    printf("Enter the value of elements inside the array -->\n");
    for(int i=0;i<n;++i){
        printf("A[%d] is : ",i);
        scanf("%d",&*(p+i));
    }

    int temp;
    int start = 0;
    int end = n-1;

    while(start<=end){
        temp = *(p+start);
        *(p+start) = *(p+end);
        *(p+end) = temp;
        start++;
        end--;
    }

    printf("Reversed value of the given array is -->\n");
    for(int i=0;i<n;++i){
        printf("A[%d] is : %d\n",i,A[i]);
    }

    return 3;
}
