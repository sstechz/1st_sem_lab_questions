//Write a program to print the most frequent element in a
//15-number array. If all are unique,print accordingly

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[15];
    int f[15];
    printf("Enter the values indside the array arr[15]\n");
    for(int i=0;i<15;++i){
        scanf("%d",&arr[i]);
        f[i]=-1;
    }
    //SORTING OF ARRAY IN ASCENDING ORDER STARTS FROM HERE
    for(int i=0;i<15;++i){
        int a=0;
        for(int j=1;j<15;++j){
            if(arr[i]>arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    //FINDING FREQUENCY OF EACH ELEMENT OF THE ARRAY
    for(int i=0;i<15;++i){
        int count=1;
        for(int j=i+1;j<15;++j){
            if(arr[i]==arr[j]){
                f[j]=0;
                ++count;
            }
        }
        if(f[i]!=0) f[i]=count;
    }
    //RETURNING ELEMENT WITH THEIR FREQUENCY
    int max=f[0],n=0;
    for(int i=0;i<15;++i){
        printf("The frequency of %d element of % index is : %d\n",arr[i],i,f[i]);
        if(f[i]>max){
            max=f[i];
            n=i;
        }
    }
    printf("The element with highest frequency of %d is : %d",max,arr[n]);

    return 3;
}
