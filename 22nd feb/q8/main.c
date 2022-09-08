#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][3];
    int i,j,k;
    int (*p)[3];
    p=A;
    printf("Enter the elements inside a 3*3 matrix A -->\n");
    for(i=0;i<3;++i){
        for(j=0;j<3;++j){
            scanf("%d",&*(*(p+i)+j));
        }
    }
    //TRANSPOSE OF MATRIX A
    int B[3][3];
    int (*q)[3];
    q=B;
    printf("\nTranspose of the matrix A is -->\n");
    for(i=0;i<3;++i){
        for(j=0;j<3;++j){
            *(*(q+i)+j)=*(*(p+j)+i);
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    //COMPAIRING BOTH A & A^t
    int count=0;
    int skew=0;
    int identity=0;
    for(i=0;i<3;++i){
        for(j=0;j<3;++j){
            if(*(*(p+i)+j)==*(*(q+i)+j)){
                count+=1;
            }
            if(*(*(p+i)+j)==-(*(*(q+i)+j))){
                skew+=1;
            }
            if(i==j){
                if(*(*(p+i)+j)==1)
                    identity+=1;
            }
        }
    }

    int det = A[0][0] * ((A[1][1]*A[2][2]) - (A[2][1]*A[1][2])) -A[0][1] * (A[1][0]
   * A[2][2] - A[2][0] * A[1][2]) + A[0][2] * (A[1][0] * A[2][1] - A[2][0] * A[1][1]);

    printf("\nDeterminant of matrix A is %d",det);
    if(count==9) printf("\nThe given matrix A is symmetric.\n");
    else if(skew==9) printf("\nThe given matrix A is skew-symmetric.\n");
    else printf("\nThe given matrix A is asymmetric.\n");

    if(identity==3) printf("The given matrix A is identity matrix.\n");
    else printf("The given matrix A is not identity matrix.\n");
    if(det!=0) printf("The given matrix A is invertible.\n");
    else printf("The given matrix A is not invertible.\n");
    return 3;
}
