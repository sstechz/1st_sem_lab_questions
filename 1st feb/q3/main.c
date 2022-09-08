#include <stdio.h>
#include <stdlib.h>

int main()
{
    //forming matrix A
    int A[2][3];
    printf("Enter the value inside 2*3 matrix A -->\n");
    for(int i=0;i<2;++i)
    {
        for(int j=0;j<3;++j)
        {
            scanf("%d",&A[i][j]);
        }
    }

    //FORMING MATRIX B
    int B[2][3];
    printf("\nEnter the value inside 2*3 matrix B -->\n");
    for(int i=0;i<2;++i)
    {
        for(int j=0;j<3;++j)
        {
            scanf("%d",&B[i][j]);
        }
    }

    //FORMING MATRIX D
    int D[3][2];
    printf("\nEnter the value inside 3*2 matrix D -->\n");
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<2;++j)
        {
            scanf("%d",&D[i][j]);
        }
    }

    //PERORMING ADDITION OPERATION
    int C[2][3];
    printf("\nThe sum of the matrix A & B is -->\n");
    for(int i=0;i<2;++i)
    {
        for(int j=0;j<3;++j)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    return 3;
}
