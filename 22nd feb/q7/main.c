#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the order 'N' for the two N*N matrix : ");
    scanf("%d",&n);

    int A[n][n];
    int B[n][n];
    int (*p)[n];
    int (*q)[n];
    p=A;
    q=B;

    printf("\nEnter the values inside the matrix A -->\n");
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            printf("A[%d][%d] is : ",i,j);
            scanf("%d",&*(*(p+i)+j));
        }
    }
    printf("\nEnter the values inside the matrix B -->\n");
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            printf("B[%d][%d] is : ",i,j);
            scanf("%d",&*(*(q+i)+j));
        }
    }

    //ADDING AND DIFFERENCE OF TWO MATRIX
    int C[n][n];
    int D[n][n];
    int (*r)[n];
    int (*s)[n];
    r=C;
    s=D;

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            *(*(r+i)+j)= (*(*(p+i)+j)) + (*(*(q+i)+j));
            *(*(s+i)+j)= (*(*(p+i)+j)) - (*(*(q+i)+j));
        }
    }

    printf("\nSum of matrix A & B is -->\n");
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            printf("%d ",*(*(r+i)+j));
        }
        printf("\n");
    }

    printf("\nDifference of matrix A & B is -->\n");
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            printf("%d ",*(*(s+i)+j));
        }
        printf("\n");
    }

    //PRODUCT OF MATRIX A & B
    int arr[n][n];
    int (*a)[n];
    a=arr;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int sum=0;
            for(int k=0;k<n;++k){
                sum+= (*(*(p+i)+k)) * (*(*(q+k)+j));
            }
            *(*(a+i)+j)=sum;
        }
    }
    printf("\nProduct of matrix A & B is -->\n");
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 3;
}
