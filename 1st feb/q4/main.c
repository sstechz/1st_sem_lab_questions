//Write a program to search and print the FIRST occurence
//of an element in an array. Print"not found" if absent.
//Take 10 numbers as the array elements input and an 11th
//number as the search element.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    printf("Enter the values inside the array arr[10]\n");
    for(int i=0;i<10;++i)
    {
        scanf("%d",&arr[i]);
    }
    int a;
    printf("\nEnter the search element : ");
    scanf("%d",&a);
    //SEARCHING PROCESS BEGINS
    int count=0;
    for(int i=0;i<10;++i)
    {
        if(a==arr[i])
        {
            printf("\nThe first occurence of the element %d is at index %d",a,i);
            count+=1;
            break;
        }
    }
    if(count==0) printf("\nnot found");

    return 3;
}
