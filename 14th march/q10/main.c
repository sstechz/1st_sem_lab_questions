#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int *arr = (int*)calloc(1,sizeof(int));
    printf("Enter the value inside the array...\n\n");

    int input=-1;
    int i=0;
    int sum=0;

    //creating a freq ptr for storing frequency
    // int *freq = (int*)calloc(1,sizeof(int));

    //taking input and reallocationg the array till the user press '0'
    while(input!=0){

        printf("Number %d : ",i+1);
        scanf("%d",&*(arr+i));

        arr = (int*)realloc(arr,(i+2)*sizeof(int));

        //taking sum till the last input
        sum+=*(arr+i);
        ++i;

        printf("Press 0 to exit ... ");
        scanf("%d",&input);
        printf("\n");
    }
    //printing the mean value
    printf("\nThe mean is : %.3f\n",sum/(float)i);
    float mean=sum/(float)i;
    int median;

    //printing the median value
    if(i%2!=0){
        int position = i/2;
        printf("The median is : %d",*(arr+position));
        median=*(arr+position);
    }
    else{
        int position = i/2;
        printf("The median is : %.3f",(*(arr+position)+*(arr+position+1))/2.0);
        median=(*(arr+position)+*(arr+position+1))/2.0;
    }

    //mode=mean-3*(mean-median)
    printf("\nThe mode is : %.3f",mean-3*(mean-median));



    return 3;
}
