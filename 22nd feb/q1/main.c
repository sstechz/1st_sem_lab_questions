#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    //HERE INITIALISATION IN ONE LINE
    printf("Enter the value of the 5 elements inside the array -->\n");
    for(int i=0;i<5;++i){
        scanf("%d",&arr[i]);
    }
    int *p=&arr[0];
    int sum=0;

    for(int j=0;j<5;++j){
        p=&arr[j];
        sum = sum + *(p);
    }
    printf("The sum of the given array is : %d\n",sum);

    return 3;
}
