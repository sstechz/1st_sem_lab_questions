#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i;
    printf("Enter the no of rows and columns of the arr : ");
    scanf("%d %d",&r,&c);

    int arr[r][c];
    int (*p)[c];
    p=arr;
//    int **p;
    float sum=0.0;

    printf("\nEnter the value of the elements inside the array -->\n");
    //ENTERING IN ROW MAJOR FORMAT
    for(i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("arr[%d][%d] is : ",i,j);
            scanf("%d",&*(*(p+i)+j));
            sum+=*(*(p+i)+j);
        }
    }

    //PRINTING MEAN VALUE
    printf("\nThe Mean Value of the given array arr is : %.3f\n",(sum/(r*c)));

    //FINDING MIN & MAX VALUES
    int min=arr[0][0];
    int max=arr[0][0];
    for(i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(*(*(p+i)+j)>=max){
                max=*(*(p+i)+j);
            }
            if(*(*(p+i)+j)<=min) min=*(*(p+i)+j);
        }
    }
    printf("The Max Value of the array arr is : %d\n",max);
    printf("The Min Value of the array arr is : %d\n",min);

    //FINDING THE MEDIAN VALUE(middle of all)
    //FIRST SORTING THE ARRAY
    int temp;
    for(i=0;i<r;++i){
        for(int j=0;j<c-1;++j){
            temp=*(*(p+i)+j);
            if(*(*(p+i)+j)>*(*(p+i)+j+1)){
                *(*(p+i)+j)=*(*(p+i)+j+1);
                *(*(p+i)+j+1)=temp;
            }
        }
    }
    //INITIALIZED AN ARRAY A
    int A[r*c];
    int k=0;
    for(i=0;i<r;++i){
        for(int j=0;j<c;++j){
            A[k]=*(*(p+i)+j);
            ++k;
        }
    }

    //PRINTING MEDIAN VALUE
    int median=0;
    if((r*c)%2==0){
        median=(r*c)/2;
        printf("The Median Value of the array is : %.3f\n",(A[median-1]+A[median])/2.0);
    }
    else{
        median=((r*c)/2)+1;
        printf("The Median Value of the array is : %d\n",A[median]);
    }

    //FOR MODE VALUE
    int maxcount =1,count=1,res=A[0];
    for(i=1;i<r*c;++i){
        if(A[i]==A[i-1]){
            ++count;
        }
        else{
            if(count>maxcount){
                maxcount=count;
                res=A[i-1];
            }
            count=1;
        }
    }
    printf("The Mode Value of the array is : %d\n",res);

    return 3;
}
