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
    //PERFORMING MULTIPLICATION OPERATION
    int a,b,c;
    printf("\nEnter no of rows and columns in 1st matrix : ");
    scanf("%d %d",&a,&b);
    printf("Enter no of columns in 2nd matrix : ");
    scanf("%d",&c);

    int m[a][b], n[b][c], p[a][c];
    int sum=0,temp;
    printf("Enter elements of 1st matrix\n");
    for(int i=0;i<a;++i){
        for(int j=0;j<b;++j){
//            if(j==(b-1))
            scanf("%d",&m[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix\n");
    for(int i=0;i<b;++i){
        for(int j=0;j<c;++j){
            scanf("%d",&n[i][j]);
        }
    }
    printf("The product of the matrix is\n");
    for(int i=0;i<a;++i){
        for(int j=0;j<c;++j){
            for(int k=0;k<b;++k){
                temp=m[i][k]*n[k][j];
                sum=sum+temp;
            }
            p[i][j]=sum;
            printf("%d ",p[i][j]);
            sum=0;
        }
        printf("\n");
    }
    //PERFORMING TRANSPOSE OPERATION
    printf("Enter elements of 3*4 matrix\n");
    int o[3][4];
    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            scanf("%d",&o[i][j]);
        }
    }
    printf("Transpose of the above matrix is \n");
    int t[4][3];
    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            t[j][i]=o[i][j];
        }
    }
    for(int i=0;i<4;++i){
        for(int j=0;j<3;++j){
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    //PERFORMING DETERMINANT OPERATION
    int d[3][3];
    printf("\nEnter the value inside 3*3 matrix d\n");
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            scanf("%d",&d[i][j]);
        }
    }
    int det=0;
    det=det+d[0][0]*((d[1][1]*d[2][2])-(d[2][1]*d[1][2]))-d[1][0]*((d[1][0]*d[2][2])-(d[2][0]*d[1][2]))+d[0][2]*((d[1][0]*d[2][1])-(d[2][0]*d[1][1]));
    printf("Determinant of the 3*3 matrix is : %d",det);

    return 3;
}
