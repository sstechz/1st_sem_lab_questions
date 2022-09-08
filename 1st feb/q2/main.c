//Write a program to take an array A[10] with values from
//user input and find the following: largest element, smallest
//element, mean value, even valued elements,and odd valued elements

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10];
    printf("Enter the values inside the array A[10]\n");
    //ARRAY FORMATION
    for(int i=0;i<10;++i)
    {
        scanf("%d",&A[i]);
    }
    //CALCULATION OF MIN,MAX,ODD & EVEN
    int max=A[0];
    int min=A[0];
    int sum=0;
    int odd,even;
    for(int i=0;i<10;++i)
    {
        if(A[i]>max) max=A[i];
        if(A[i]<min) min=A[i];
        sum=sum+A[i];
    }
    printf("The largest element in the given array is : %d\n",max);
    printf("The smallest element in the given array is : %d\n",min);
    printf("The mean of the given array is : %.1f\n",(sum/10.0));
    printf("The even elements in the given array are : ");
    for(int i=0;i<10;++i)
    {
      if(A[i]%2==0) printf("%d ",A[i]);
    }
    printf("\nThe odd elements in the given array are : ");
    for(int i=0;i<10;++i)
    {
        if(A[i]%2!=0) printf("%d ",A[i]);
    }

    return 3;
}
