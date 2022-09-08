#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array --> ");
    scanf("%d",&n);

    int A[n];
    int B[n];
    int C[n];
    //HERE C IS THE TEMPORARY ARRAY
    int *p=A,*q=B,*r=C;
    printf("Enter the value of elements inside the array A -->\n");
    for(int i=0;i<n;++i){
        printf("A[%d] is ",i);
        scanf("%d",&*(p+i));
    }
    printf("Enter the value of elements inside the array B -->\n");
    for(int j=0;j<n;++j){
        printf("B[%d] is ",j);
        scanf("%d",&B[j]);
        *(q+j)=B[j];
        C[j]=B[j];
        *(r+j)=C[j];
    }

    //SWAPPING PROCESS BEGINS
    for(int k=0;k<n;++k){
        *(q+k)=*(p+k);
        *(p+k)=*(r+k);
    }

    //PRINTING SWAPPED VALUES
    printf("\nAfter swapping\n");
    printf("New values of array A -->\n");
    for(int i=0;i<n;++i) printf("A[%d] is %d\n",i,*(p+i));
    printf("\nNew values of array B -->\n");
    for(int j=0;j<n;++j) printf("B[%d] is %d\n",j,*(q+j));

    return 3;
}
